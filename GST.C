#include<stdio.h>
#include<conio.h>
void main()
{
	int rate, qty, amt, dis5, billamt, gst, netbill;
	clrscr();
	printf("enter rate:");
	scanf("%d",&rate);
	printf("enter qty:");
	scanf("%d",&qty);
	amt = rate * qty;
	dis5 = amt * 0.05;
	billamt = amt - dis5;
	gst = billamt * 0.18;
	netbill = billamt + gst;

	printf("\nrate\tqty\tamt\tdis5\tbillamt\tgst\tnetbill");
	printf("\n%d\t%d\t%d\t%d\t%d\t%d\t%d",rate,qty,amt,dis5,billamt,gst,netbill);
	getch();
}