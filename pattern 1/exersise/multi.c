#include <stdio.h>

int main() {
	
	int n,a;
	printf("enter the table ");
	scanf("%d",&n);
	
	
    for(int i=1; i<=10; i++){
        printf("%4d\t*%4d\t=%4d\n",i,n,i*n);
    }
	printf("\n");
	
	return 0;
}