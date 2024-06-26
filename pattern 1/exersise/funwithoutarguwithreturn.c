
#include <stdio.h>


float sum(){
    float height=10, base, triangle;
  scanf("%f",&base);
    triangle=(height*base)/2.0;
   
    return triangle;
}

int main()
{
    float total;
   total= sum();
   printf("%f",total);
        
    return 0;
}
