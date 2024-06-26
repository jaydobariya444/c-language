#include<stdio.h>

int main(){

    float a,b,c,d,e;
    float per;

    printf("enter 5 subjects marks :");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    float totalmarks;
    float averagemark;

    totalmarks = (a + b + c + d + e);
    averagemark = (totalmarks/ 5.0);
    per = (totalmarks / 500.0) * 100;

    printf("\n total marks = %f\n",totalmarks);
    printf("\n average marks = %f\n",averagemark);
    printf("\n percentage marks = %f\n",per);



}