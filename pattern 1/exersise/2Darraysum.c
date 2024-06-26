// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int a[2][2] = {{1,2},{11,12}};
    int a1[2][2] = {{1,2},{11,12}};
    int sum1;
    for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			sum1 = sum1+a[i][j];
		}
    }
   for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
			    sum1 = sum1+a1[i][j];
		    }
    }
	
	
    printf("Sum is:- %d", sum1);   
    return 0;
}