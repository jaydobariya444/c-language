#include<stdio.h>

int main()
{
    int n,a = 0,b = 1,c,i;
    printf("enter number");
    scanf("%d",&n);

    for(i = 1;i <= n;i++)
    {
        printf("%d",a);
        c = a+b;
        a = b;
        b = c;
    }
}