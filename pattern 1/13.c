#include <stdio.h>

int main() {
    int t;
    for(int i=1; i<=50; i++){
	if(i%2==0)
        printf("%4d",i);
		t+=i;
        t=t+i;
        printf("\n");
       
    }
	printf("\ntotal:-%d",t);
    return 0;
}