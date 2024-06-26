#include<stdio.h>

void devland(int a[5]){

    for(int i = 0;i < 5;i++){
        printf("%d ",a[i]);
    }    
    
    
    
}
int main()
{
    
    int a[5] = {10,20,30,40,50};
    devland(a);
    
    return 0;
}
