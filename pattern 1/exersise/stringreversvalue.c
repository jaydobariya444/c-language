#include<stdio.h>
#include<string.h>

int main() 
{

    int x=0;
    char string[50];
    gets(string);
    
    // puts(string);
    for(int i=0; string[i]!='\0'; i++){
       x++;
    }
    printf("%d\n",x);
    for (int i = 0, j = x - 1; i <= j; i++, j--) {
        // swapping characters
        char c = string[i];
        string[i] = string[j];
        string[j] = c;
    }
 
     printf("Reversed String: %s", string);
    

    return 0;
}