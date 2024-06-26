#include <stdio.h>

int main() {
    int t=1;
    for(int i=1; i<=10; i++){
        printf("%4d",i);
		t+=i;
    
        printf("\n");
       
    }
	printf("\ntotal:-%d",t);
    return 0;
}