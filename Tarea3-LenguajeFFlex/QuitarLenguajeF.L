/* Declaraciones */
%option noyywrap

%{

/*Lo que o coloque aquí se copiara tal en el código */

%}



%%
afa printf("a");
ofo printf("o");
efe printf("e");
ufu printf("u");
ifi printf("i");

%%

int main(void){
 yylex();
 return 0;

}