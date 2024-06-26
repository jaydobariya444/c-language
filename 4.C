#include<stdio.h>
#include<conio.h>
void main()
{
	float height;
	float base;
	float angle;
	clrscr();
	printf("enter value of height:");
	scanf("%f",&height);
	printf("enter value of base:");
	scanf("%f",&base);
	angle = (height*base)/2;
	printf("area of triagle: %.2f",angle);
	getch();
}
