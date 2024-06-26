#include <stdio.h>

int main() {
    int t=1;
    for(int i=1; i<=15; i++){
        printf("%4d",i*t);
        t=t+t;
        printf("\n");
       
    }
    return 0;
}