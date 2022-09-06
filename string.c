#include <stdio.h>
#include "string.h"
#define MAX_LINE_LENGTH 1000
 
char arr[100][50] = {}; 
int main() {
    FILE    *textfile;
    char    line[MAX_LINE_LENGTH];
     
    textfile = fopen("readme.txt", "r");
    if(textfile == NULL)
        return 1;
     
    while(fgets(line, MAX_LINE_LENGTH, textfile)){
        //printf(line);
        strcpy(arr, line);
    }
     
    fclose(textfile);
    return 0;
    for (int i = 0; i < 3; i++)
    {
        printf("%s",arr);
    }
    
}