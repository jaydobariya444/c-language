// find the factorial in c

#include<stdio.h>

int main()
{
    // int n,a = 1,c,i;
    // printf("enter value :");
    // scanf("%d",&n);

    // for(i = 1;i <= n;i++)
    // {
    //     printf("%d",a);
    //     a++;
    //     c = i * i;
    //     a = n * i;
    //     i = a * c;
        
    // }

    int n;
    printf("Enter number the value:");
    scanf("%d",&n);
    int num = 1, i;
 
    // loop from 2 to n to get the factorial
    for (i = 1; i <= n; i++) {
        num *= i;
        printf("Factorial of is %d ", num);

    }
}