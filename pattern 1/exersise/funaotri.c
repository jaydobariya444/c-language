
#include <stdio.h>


void sum(){
    float height, base, triangle;
    scanf("%f",&height);
    scanf("%f",&base);
    triangle=(height*base)/2;
    printf("%.2f\n",triangle);
}

int main()
{
    printf("Hello World\n");
    sum();

    return 0;
}
