// Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches and width of 5 inches.
// Expected Output:
// Perimeter of the rectangle = 24 inches
// Area of the rectangle = 35 square inches


#include<stdio.h>

int main(){

    int height,width;
    height = 7;
    width = 5;

int perimeter = 2*(height + width);
    printf("enter value of = %d\n",perimeter);

int area = (height * width);
    printf("enter value of = %d",area);

    return(0);
}