#include<stdio.h>
#include<conio.h>
void main()
{
	float p,r,t,si;
	clrscr();
	printf("enter value of principle:");
	scanf("%f",&p);
	printf("enter value of rate of interest:");
	scanf("%f",&r);
	printf("enter vqalue of time:");
	scanf("%f",&t);
	si = (p*r*t)/100;
	printf("area of simmple interest: %.2f,si");
	getch();
}