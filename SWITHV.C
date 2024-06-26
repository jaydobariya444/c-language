#include<stdio.h>
#include<conio.h>
void main()
{
	int a, b, c;
	clrscr();
	a = 20;
	b = 35;
	printf("the value of a %d:",a);
	printf("the value of b %d:",b);

	c = a;
	a = b;
	b = c;
	printf("%d\t%d",a,b,c);
	getch();
}