#include<stdio.h>

void s1(int a){
    
    if(a%3==0&&a%5==0){
        printf("divisible");
    }
    else{
        printf("not divisible");
    }
}

int s(int a){
    
    if(a%3==0&&a%5==0){
        printf("divisible");
    }
    else{
        printf("not divisible");
    }
    return 0;
}

int main(){
    
    s1(12);
    printf("\n");
    
    int a;
    a=s(18);
    
    
    return 0;
    
}