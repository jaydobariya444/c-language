#include<stdio.h>

void s(int a, int b){
    
    int smollest;
    if(a<b){
        printf("%d",a);
    }else{
        printf("%d",b);
    }
}

int main(){
    
    s(100,50);
	
	return 0;
} 