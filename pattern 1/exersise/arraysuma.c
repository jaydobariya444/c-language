// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int a[] = {1, 2, 3, 4, 5, 6};
    int sum;
    for(int i=0; i<6; i++){
        sum = sum+a[i];
    }
    printf("Sum is:- %d", sum);   
    return 0;
}