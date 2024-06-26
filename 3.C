#include<stdio.h>
#include<conio.h>
void main()
{
	int lenth;
	int width;
	int rectangle;
	clrscr();
	printf("enter value of lenth:");
	scanf("%d",&lenth);
	printf("enter value of width:");
	scanf("%d",&width);
	rectangle = lenth * width;
	printf("area of rectangle : %d",rectangle);
	getch();
}