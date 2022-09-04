/*Declaraciones*/
%option noyywrap
%{
    /*Lo que yo coloque aqui  se copiara tal cual en el codigo */
    int numlineas=0;
%}
letra[a-zñA-zAÑ]
realpos[0-9]+
realneg[^][0-9]+


%%
ito printf("OTE");
amor printf("odio");
if 
{
    printf("IF\n");
}

{letra}+     printf("palabra %s\n",yytext);
{realpos}+   printf()

\n numlineas++;

"<" printf("OPREL",yytext);
"<=" printf("OPREL",yytext);
">" printf("OPREL",yytext);
">=" printf("OPREL",yytext);
[0-9]+ printf("Real Positivo\n",yytext);
^[-][0-9]+ printf("Real negativo\n",yytext);

%%

int main(void){
    yyin = fopen("test.txt","r");
    yylex();
    printf("Total de lineas: %i\n",numlineas);
    return 0;
}