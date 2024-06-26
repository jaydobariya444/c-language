#include<stdio.h>

int main()
{
    int n,num = 1,i;
    printf("enter the value:");
    scanf("%d",&n);


    for(i = 1;i <= n;i++)
    {
        num *= i;
        printf("factorial value is: %d\n",num);
    }
}
