#include <stdio.h>

int factorial(int n){

    if(n==1||n==0){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}
int main() {
    
    int n=5;
    int total;
    total=factorial(n);
    
    printf("Factorial is:- %d",total);

    return 0;
}