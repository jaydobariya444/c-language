// Write a C program to print the following characters in reverse.
// Test Characters: 'X', 'M', 'L'
// Expected Output:
// The reverse of XML is LMX

#include<stdio.h>

int main()
{   
    // Declare and initialize character variables
    char char1 = 'x';
    char char2 = 'm';
    char char3 = 'l';   


    // Print the original and reversed characters
    printf("The reverse of %c%c%c is %c%c%c\n", char1 , char2 , char3 , char3 , char2 , char1);

    return(0);
}