/*Declaraciones*/
%option noyywrap
%{

%}

entero[+-][0-9]+ 
real[+-][0-9]+(\.[0-9]+)?
verdadero[verdadero]
falso[falso]
cadena[a-zA-Z]
si[si]
sino[sino]
o-que-si[o-que-si]
nombre_variables[a-z][a-zA-Z]+|[a-z]
nombre_funciones[A-N]|[P-X]|[Z]|[A-Z][a-zA-Z]+


%%


{entero}+ printf("entero %d\n",yytext);
{real}+   printf("real %d\n",yytext);
{cadena}+ printf("cadena %s\n",yytext);
{nombre_variables}+ printf("nombre_variables %s\n",yytext);
{nombre_funciones}+ printf("nombre_funciones %s\n",yytext);



"<" printf("OPREL",yytext);
"<=" printf("OPREL",yytext);
">" printf("OPREL",yytext);
">=" printf("OPREL",yytext);
"<>" printf("OPREL",yytext);
"!=" printf("OPREL",yytext);
"=" printf("OPREL",yytext);

"o" printf("OPLOG",yytext);
"y" printf("OPLOG",yytext);
"no" printf("OPLOG",yytext);

"+" printf("OPARI",yytext);
"-" printf("OPARI",yytext);
"*" printf("OPARI",yytext);
"/" printf("OPARI",yytext);
"%" printf("OPARI",yytext);
"**" printf("OPARI",yytext);

"funcion" printf("funcion",yytext);

%%

int main(void){
    yyin = fopen("test.txt","r");
    yylex();
    return 0;
}
