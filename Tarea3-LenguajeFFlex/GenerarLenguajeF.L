/* Declaraciones */
%option noyywrap

%{

/*Lo que o coloque aquí se copiara tal en el código */

%}



%%
a printf("afa");
o printf("ofo");
e printf("efe");
u printf("ufu");
i printf("ifi");

%%

int main(void){
 yylex();
 return 0;

}