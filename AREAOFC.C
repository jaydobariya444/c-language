#include<stdio.h>
#include<conio.h>
void main()
{
	float circle;
	float pi, radious;
	clrscr();
	pi = 3.14;
	printf("the value of radious is:");
	scanf("%f",&radious);
	circle = (radious*radious)*pi;
	printf("the value of circle is: %f",circle);
	getch();
}



