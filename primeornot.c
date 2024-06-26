#include<stdio.h>

int main()
{
    int n, f = 1;
    for(int i = 2;i <= n;i++)
    {
        if(n % i == 0)
        f = 0;
        break;
    }
    if(f)
    {
        printf("%d Prime number \n",n);
    }
    else
    {
        printf("%d not",n);
    }
    return 0;
}