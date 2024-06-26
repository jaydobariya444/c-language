#include<stdio.h>

int main(){

    int i,j,k,l,m,n;

    for(int i=1; i<=5; i++){
        for(int j=1; j<=5-i; j++){
            printf(" ");
        }
        for(int k=1; k<=2*i-1; k++){
            printf("*");
        }
        printf("\n");
    }
    for(int l=4; l>=1; l--){
        for(m=1; m<=5-l; m++){
            printf(" ");
        }
        for(n=1; n<=2*l-1; n++){
            printf("*");
        }
        printf("\n");
    }
    

}