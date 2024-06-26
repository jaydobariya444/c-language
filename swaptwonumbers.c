// Swap Two Numbers Using a Temporary Variable


#include<stdio.h>

int main()
{
    int x,y,z;
    printf("enter value x: ");
    scanf("%d",&x);

    printf("enter value y: ");
    scanf("%d",&y);

    z = x;
    x = y;
    y = z;

    printf("after swaping x = %d , y = %d",x,y);
    return 0;
}