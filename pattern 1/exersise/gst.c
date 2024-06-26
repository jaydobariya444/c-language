#include<stdio.h>

struct netbill
{
    int amt, rate, qty ;
    float dis, billamt, gst, netbill;
};

int main(){

    struct netbill netbill[3];
    
    
    for(int i=0; i<3; i++){
        printf("enter rate");
        scanf("%d",&netbill[i].rate);
        printf("enter qty");
        scanf("%d",&netbill[i].qty);

        netbill[i].amt=netbill[i].qty*netbill[i].rate;
        netbill[i].dis=netbill[i].amt*0.05;
        netbill[i].billamt=netbill[i].amt-netbill[i].dis;
        netbill[i].gst=netbill[i].billamt*0.18;
        netbill[i].netbill=netbill[i].billamt+netbill[i].gst;
    
    printf("%d\t%d\t%d\t%f\t%f\t%f\t%f",netbill[i].rate,netbill[i].qty,netbill[i].amt,netbill[i].dis,netbill[i].billamt,netbill[i].gst,netbill[i].netbill);

    }
    
    
    return 0;
}


