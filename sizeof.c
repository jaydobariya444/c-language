#include<stdio.h>

int main()
{
    int i;
    char c;
    float f;
    double d;

    printf("integer size %1d\n",sizeof(i));
    printf("char size %1d\n",sizeof(c));
    printf("float size %1d\n",sizeof(f));
    printf("double size %1d",sizeof(d));
}