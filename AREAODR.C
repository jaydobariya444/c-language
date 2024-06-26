#include<stdio.h>
#include<conio.h>
void main()
{
	int length,width,rectangle;
	clrscr();
	printf("the value of length is :");
	scanf("%d",&length);
	printf("the value of width is :");
	scanf("%d",&width);
	rectangle = length * width;
	printf("the value of rectangle is %d:",rectangle);
	getch();
}