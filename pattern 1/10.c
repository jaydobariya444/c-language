#include <stdio.h>

int main() {
   for(int i=65; i<=90; i++){
       for(int j=97; j<=122; j++){
            printf("%4c %4c",i,j);
            i++;
            printf("\n");
       }
   }
    return 0;
}