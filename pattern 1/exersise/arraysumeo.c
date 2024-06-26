// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int a[] = {1, 2, 3, 4, 5, 6};
    int even=0,odd=0;
    for(int i=0; i<6; i++){
        if(a[i]%2==0){
        even += a[i];
        }    
        printf("Sum of even elements: %d\n", even);
        if(a[i]%2==1){
            odd += a[i];
            printf("Sum of odd elements: %d\n", odd);
        }
        
    }

    
    
    return 0;
}