#include<stdio.h>
#include<conio.h>
void main()
{
	int a= 50,b = 25,c;
	clrscr();
	printf("the value a & b is :%d & %d\n",a,b);
	c = a;
	a = b;
	b = c;
	printf("swapping the value of a and b is %d & %d",a,b);
	getch();
}