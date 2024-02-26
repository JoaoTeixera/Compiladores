%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "hash.h"
    #include "analisador.tab.h"

    extern FILE *yyin;

    int yylex(void);
    void yyerror(char *);

    int linha = 1;

    Item *tokens = NULL;
    Item *usuario = NULL;
    Hash *h = NULL;
    Hash *simbolo = NULL;

    

%}

%union {
    int ival;     
    double dval;  
    char *sval;  
}

%token <ival> INTEIRO
%token <dval> REAL
%token LETRA
%token <sval> ID
%token <sval> BIB
%token WHITESPACE
%token ENTER
%token ERRO
%token ASPAS

%token IF_TOK
%token ELSE_TOK
%token FOR_TOK
%token WHILE_TOK

%token CHAR_TOK
%token INT_TOK
%token FLOAT_TOK
%token DOUBLE_TOK
%token VOID_TOK

%token MAIN_TOK
%token PRINT_TOK
%token SCAN_TOK
%token RETURN_TOK
%token IMPORT_TOK
%token DEFINE_TOK

%left MAIS_TOK
%left MENOS_TOK
%left DIV_TOK
%left MULT_TOK
%token MOD_TOK
%token NEG_TOK
%token OR_TOK
%token XOR_TOK
%token AND_TOK

%token L_AND_TOK
%token L_OR_TOK
%token L_SHL_TOK
%token L_SHR_TOK

%token INC_TOK
%token DEC_TOK

%token ATR_TOK
%token ATR_SM_TOK
%token ATR_DC_TOK
%token ATR_MT_TOK
%token ATR_DV_TOK
%token ATR_MD_TOK

%token IG_TOK
%token DIF_TOK
%token MEN_TOK
%token MAI_TOK
%token MAI_IG_TOK
%token MEN_IG_TOK

%token VIRG_TOK
%token PVIRG_TOK
%token DPONT_TOK

%token A_PAR_TOK
%token F_PAR_TOK
%token A_COL_TOK
%token F_COL_TOK
%token A_CHA_TOK
%token F_CHA_TOK

%%

program:
    imp program
    | def program
    | seq                                           {printf("Sintaticamente Correto!\n");}
    |                                               {printf("Vazio\n");}
    ;
seq:
    dec PVIRG_TOK                                           {printf("Sequencia -> <declaracao> ;\n");}
    | dec PVIRG_TOK seq                                     {printf("Sequencia -> <declaracao> ; <sequencia>\n");}
    ;   
dec:
    main                                            {printf("Declaracao -> <main>\n");}
    | cond                                          {printf("Declaracao -> <condicional>\n");}
    | rep                                           {printf("Declaracao -> <repeticao>\n");}
    | atr                                           {printf("Declaracao -> <atribuicao>\n");}
    | lei                                           {printf("Declaracao -> <leitura>\n");}
    | esc                                           {printf("Declaracao -> <escrita>\n");}
    | exp                                           {printf("Declaracao -> <expressao>\n");}
    | func                                          {printf("Declaracao -> <funcao>\n");}
    | ret                                           {printf("Declaracao -> <retorno>\n");}
    ;
main:
    tipo MAIN_TOK A_PAR_TOK F_PAR_TOK A_CHA_TOK seq F_CHA_TOK       {printf("Main -> <tipo> main ( ) { <sequencia> }\n");}
    ;
cond:
    IF_TOK A_PAR_TOK exp F_PAR_TOK A_CHA_TOK seq F_CHA_TOK                                      {printf("Condicional -> if ( <expressao> ) { <sequencia> }\n");}
    | IF_TOK A_PAR_TOK exp F_PAR_TOK A_CHA_TOK seq F_CHA_TOK ELSE_TOK A_CHA_TOK seq F_CHA_TOK   {printf("Condicional -> if ( <expressao> ) { <sequencia> } else { <sequencia> }\n");}
    ;
rep: 
    FOR_TOK A_PAR_TOK atr PVIRG_TOK exp PVIRG_TOK atr F_PAR_TOK A_CHA_TOK seq F_CHA_TOK     {printf("Repeticao -> for ( <atribuicao> ; <expressao> ; <atribuicao> ) { <sequencia> }\n");}
    | WHILE_TOK A_PAR_TOK exp F_PAR_TOK A_CHA_TOK seq F_CHA_TOK                             {printf("Repeticao -> while ( <expressao> ) { <sequencia> }\n");}
    ;
atr:
    ID ATR_TOK exp                          {printf("Atribuicao -> %s = <expressao>\n", $1);}
    | tipo ID ATR_TOK exp                   {printf("Atribuicao -> <tipo> %s = <expressao>\n", $2);}
    | ID INC_TOK                            {printf("Atribuicao -> %s ++\n", $1);}
    | ID DEC_TOK                            {printf("Atribuicao -> %s --\n", $1);}
    | ID ATR_SM_TOK exp                     {printf("Atribuicao -> %s += <expressao>\n", $1);}
    | ID ATR_DC_TOK exp                     {printf("Atribuicao -> %s -= <expressao>\n", $1);}
    | ID ATR_MT_TOK exp                     {printf("Atribuicao -> %s *= <expressao>\n", $1);}
    | ID ATR_DV_TOK exp                     {printf("Atribuicao -> %s /= <expressao>\n", $1);}
    | ID ATR_MD_TOK exp                     {printf("Atribuicao -> %s %= <expressao>\n", $1);}
    ;           
lei:
    SCAN_TOK A_PAR_TOK ID F_PAR_TOK         {printf("Leitura -> scan ( %s )\n", $3);}
    ;
esc:
    PRINT_TOK A_PAR_TOK exp F_PAR_TOK       {printf("Escrita -> print ( <expressao> )\n");}
    ;
exp:
    exp_simples comp exp_simples            {printf("Expressao -> <exp_simples> <comparacao> <exp_simples>\n");}
    | exp_simples                           {printf("Expressao -> <exp_simples>\n");}
    
    ;
func:
    tipo ID A_PAR_TOK lista_parametros F_PAR_TOK A_CHA_TOK seq F_CHA_TOK         {printf("Funcao -> <tipo> %s ( <lista_parametros> ) { <sequencia> }\n", $2);}
    | tipo ID A_PAR_TOK F_PAR_TOK A_CHA_TOK seq F_CHA_TOK                       {printf("Funcao -> <tipo> %s ( ) { <sequencia> }\n", $2);}
    ;
lista_parametros:
    parametro                                               {printf("Lista_parametros -> <parametro>\n");}
    | lista_parametros VIRG_TOK parametro                   {printf("Lista_parametros -> <lista_parametros> , <parametro>\n");}
    ;
parametro:
    tipo ID                 {printf("Parametro -> <tipo> %s\n", $2);}
    ;
ret:
    RETURN_TOK exp       {printf("Retorno -> return <expressao>\n");}
    ;
imp:
    IMPORT_TOK MEN_TOK BIB MAI_TOK               {printf("Importacao -> #import < %s > \n", $3);}
    ;
def:
    DEFINE_TOK ID exp                               {printf("Definicao -> #define %s <expressao>\n", $2);}
    ;
comp:
    MEN_TOK         {printf("Comparacao -> <\n");}
    | IG_TOK        {printf("Comparacao -> ==\n");}
    | MAI_TOK       {printf("Comparacao -> >\n");}
    | DIF_TOK       {printf("Comparacao -> !=\n");}
    | MAI_IG_TOK    {printf("Comparacao -> >=\n");}
    | MEN_IG_TOK    {printf("Comparacao -> <=\n");}
    ;
exp_simples: 
    exp_simples soma termo      {printf("Exp_simples -> <exp_simples> <soma> <termo>\n");}
    | termo                     {printf("Exp_simples -> <termo>\n");}
    ;
soma:
    MAIS_TOK                    {printf("Soma -> +\n");}
    | MENOS_TOK                 {printf("Menos -> -\n");}
termo:
    termo mult termo            {printf("Termo -> <termo> <mult> <termo>\n");}
    | fator                     {printf("Termo -> <fator>\n");}
    ;
mult:
    MULT_TOK                    {printf("Mult -> *\n");}
    | DIV_TOK                   {printf("Mult -> /\n");}
    ;
fator:
    A_PAR_TOK exp F_PAR_TOK     {printf("Fator -> ( <expressao> )\n");}
    | numero                    {printf("Fator -> <numero>\n");}
    | ID                        {printf("Fator -> %s\n", $1);}
    ;
numero:
    INTEIRO                     {printf("Numero -> %d\n", $1);}
    | REAL                      {printf("Numero -> %lf\n", $1);}
    ;
tipo:
    INT_TOK                       {printf("Tipo -> int\n");}
    | DOUBLE_TOK                  {printf("Tipo -> double\n");}
    | CHAR_TOK                    {printf("Tipo -> char\n");}
    | FLOAT_TOK                   {printf("Tipo -> float\n");}
    | VOID_TOK                    {printf("Tipo -> void\n");}
    ;

%%

void yyerror(char *s){
    printf("erro na linha %d -> %s\n", linha, s);
}

int main(){	
    char str[50];
    int saida = 1;
    int opcao;
    FILE* arq;

    menu();
        
    do{
        printf("\n1 - Inserir arquivo de leitura\n");
        printf("2 - Imprimir tabela de tokens\n");
        printf("3 - Imprimir tabela de simbolos\n");
        printf("0 - Sair\n");

        scanf("%d", &opcao);
    
        switch(opcao) {
            case 1 : 
                h = limpaHash(h);
                simbolo = limpaHash(simbolo);
                h = criarHash(200);
                simbolo = criarHash(200);
                printf("\nDigite o nome do arquivo: ");
                scanf("%s", str);
                strcat(str, ".txt");
                arq = fopen(str, "r");
                while(arq == NULL){
                    
                    printf("Digite o nome correto do arquivo: "); 
                    scanf("%s", str);
                    strcat(str, ".txt");
                    arq = fopen(str, "r");
                }

                yyin = arq;
                yyparse(); 
                break;

            case 2 :
                printf("TABELA DE TOKENS\n"); 
                printf(" ______________________ _____________________ \n");
                imprimirHash(h);
                printf(" ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾ ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾ \n");
                break;
            case 3 : 
                printf("TABELA DE SIMBOLOS\n"); 
                printf(" ______________________ _____________________ \n");
                imprimirHash(simbolo);
                printf(" ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾ ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾ \n");
                break;
    
        }
        printf("Total de linhas: %d\n", linha);

    }while(opcao != 0);
    fclose(arq);
    yyparse();     
	return 0;
}





