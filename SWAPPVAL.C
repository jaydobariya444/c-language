#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("the value of a:");
	scanf("%d",&a);
	printf("the value of b:");
	scanf("%d",&b);
	a = a+b;
	b = a-b;
	a = a-b;
	printf("value of a: %d\n",a);
	printf("value of b: %d",b);
	getch();
}