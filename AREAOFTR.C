#include<stdio.h>
#include<conio.h>
void main()
{
	int base, height, tringle;
	clrscr();
	printf("the value of base is : ");
	scanf("%d",&base);
	printf("the value of height is : ");
	scanf("%d",&height);
	tringle = (height*base)/2;
	printf("the value of tringle is %d:",tringle);
	getch();
}
