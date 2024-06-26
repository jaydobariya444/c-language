#include <stdio.h>

int main() {
	
	int t,a;
    for(int i=1; i<=20; i++){
        
        if(i%2==1){
            printf("%4d\n",i);
            t+=i;
        }
    }
    printf("%4d",t);
	printf("\n");
	
	return 0;
}