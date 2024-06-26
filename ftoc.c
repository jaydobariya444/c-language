#include<stdio.h>

float tocel(float fer){
    return (5.0 / 9.0) * (fer - 32.0);
}
int main(){
    float f = 77.25;
    float result = tocel(f);

    printf("Fahrenheit : %.2f",f);
    printf("Convert Fahrenheit to Celsius: %.2f",result);

    return 0;
}