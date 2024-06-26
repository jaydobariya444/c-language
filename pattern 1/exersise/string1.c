#include<stdio.h>
#include<string.h>

int main() 
{

    int x=1;
    char string[50];
    gets(string);
    
    // puts(string);
    for(int i=0; string[i]!='\0'; i++, x++){
        printf("%c",x);
    }
    printf("%d",x);

    return 0;
}