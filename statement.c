#include<stdio.h>

int main()
{
    int a = 1;
    loop:
    printf("%d",a);

    a++;
    if(a<=10)
    {
        goto loop;
    }

    


}