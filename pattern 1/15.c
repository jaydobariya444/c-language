#include <stdio.h>

int main() {
    int t=1;
    for(int i=1; i<=15; i++){
        if(i%2==0){
            printf("%4d",i*i);
        }else{
            printf("%4d",i);
        }
        
        printf("\n");
       
    }
    return 0;
}