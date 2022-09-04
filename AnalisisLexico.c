#include<stdio.h>
#include<string.h>
#include "ctype.h"

char frase[80]={"+++54<>>=<=aDwer=34==90=!=!---%"};
int n; //elementos en la l�nea
int ind=0; //indice del arreglo
int edo=0; //estado del aut�mata

int main(void){
    n=strlen(frase);
    while(ind<n){
        switch(edo){
        case 0:
            switch(frase[ind]){
            case '<':
                edo=1; break;
            case '=':
                edo=4; break;
            case '>':
                edo=7; break;
            case '!':
                edo=10; break;
            case '+':
                edo=13; break;
            case '-':
                edo=16; break;
            case '*':
                edo=19; break;
            case '%':
                edo=22; break;
            case '/':
                edo=24; break;
            
            default:
                if (isalpha(frase[ind]))
                {
                    printf("%c\t",frase[ind]);
                    printf("ID\n");
                }
                // else if (isalpha(frase[ind]) && isalpha(frase[ind+1]))
                // {
                //     printf("%s\t",frase[ind]+frase[ind+1]);
                // }
                else if (isdigit(frase[ind]))
                {
                    printf("%d\t",frase[ind]);
                    printf("NUM\n");
                } 
                
                else
                {
                     printf("Error %c\n",frase[ind]); break;
                }
                
                
            }
            ind++; break;
        case 1:
            if(frase[ind]=='='){
                printf("<=\t");
                printf("OPREL\n");
                ind++;
            }
            else {
                printf("<\t");
                printf("OPREL\n");
            }
            edo = 0;
            break;
        case 4:
            if(frase[ind]=='='){
                printf("==\t");
                printf("OPREL\n");
                ind++;
            }
            else {
                printf("=\t");
                printf("ASIG\n");
            }
            edo = 0;
            break;
        case 7:
            if(frase[ind]=='='){
                printf(">=\t");
                printf("OPREL\n");
                ind++;
            }
            else {
                printf(">\t");
                printf("OPREL\n");
            }
            edo = 0;
            break;
        case 10:
            if(frase[ind]=='='){
                printf("!=\t");
                printf("OPREL\n");
                ind++;
            }
            else {
                printf("!\t");
                printf("OPREL\n");
            }
            edo = 0;
            break;
        case 13:
            if(frase[ind]=='+'){
                printf("++\t");
                printf("OPAR\n");
                ind++;
            }
            else {
                printf("+\t");
                printf("OPAR\n");
            }
            edo = 0;
            break; 
        case 16:
            if(frase[ind]=='-'){
                printf("--\t");
                printf("OPAR\n");
                ind++;
            }
            else {
                printf("-\t");
                printf("OPAR\n");
            }
            edo = 0;
            break;
        case 19:
            if(frase[ind]=='*'){
                printf("**\t");
                printf("OPAR\n");
                ind++;
            }
            else {
                printf("*\t");
                printf("OPAR\n");
            }
            edo = 0;
            break;
        case 22:
            printf("%\t");
            printf("OPAR\n");
            edo = 0;
            break;

        case 24:
            printf("/\t");
            printf("OPAR\n");
            edo = 0;
            break;        
        
        case 26:
            if(isalpha(frase[ind])){
                printf("%d\t",frase[ind]);
                printf("ID\n");
                ind++;
            }
            else if (!isalpha(frase[ind]))
            {
                printf("%d\t",frase[ind]);
                printf("ID\n");
                ind++;
            }
            else
            {
                printf("%d\t",frase[ind]);
                printf("ID\n");
            }
            edo = 0;
            break;      
        }
    }
}
