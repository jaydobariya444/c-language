#include<stdio.h>
#include<conio.h>
void main()
{
	int pi;
	int a;
	int circle;
	clrscr();
	printf("enter value of pi:");
	scanf("%d",&pi);
	a = pi*pi;
	circle = a * 3.14;
	printf("Area of circle: %d",circle);
	getch();
}