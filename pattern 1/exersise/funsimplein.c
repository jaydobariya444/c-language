#include<stdio.h>

void s1(float p, float r, float t){
    
    float si=0;
    si=(p*r*t)/100;
    printf("simple interest:%f",si);
}
void s2(){
    
    float p=50,r=100,t=3,si=0;
    
    si=(p*r*t)/100;
    printf("simple interest:%f",si);
}

float s(float p, float r, float t){
    float si;
    si=(p*r*t)/100;
    return si;
}
float s3(){
    float p=50,r=100,t=3,si=0;
    si=(p*r*t)/100;
    return si;
}

int main(){
    
    s1(100,50,3);
    printf("\n");
    s2();
    printf("\n");
    
    float si;
    si=s(50,100,3);
    printf("%f",si);
    printf("\n");
    float si1;
    si1=s3();
    printf("%f",si1);
    
    return 0;
}