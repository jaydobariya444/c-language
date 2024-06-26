#include<stdio.h>

int main()
{

    FILE *ptr;
    char string[50];

    // ptr=fopen("new.txt","a");
    // gets(string);
    // fprintf(ptr, "%s",string);

    ptr= fopen("new.txt","r");
    while(fscanf(ptr,"%s",string)!=EOF){

        printf("%s",string);
    }

}