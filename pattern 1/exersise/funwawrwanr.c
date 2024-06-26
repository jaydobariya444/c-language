#include<stdio.h>

void s(int a, int b){
    
    int total;
    total=a+b;
    printf("%d",total);
}

int s1(int a, int b){
    
    int total;
    total=a+b;
    return total;
    
}

int main(){
    
    s(20,50);
    
    int total;
    total=s1(10,5);
    printf("\n%d",total);
    
    return 0;
}