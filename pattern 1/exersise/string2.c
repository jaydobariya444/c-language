#include<stdio.h>
#include<string.h>

int main() 
{

    int x=1;
    char string[50];
    gets(string);
    
    // puts(string);
    for(int i=0; string[i]=='\0'; i++){
        for(int j=50; j<=0; j--)
            printf("%c",string[i][j]);
    }
    // printf("%s",string[i];

    return 0;
}