// Prime Number Program in C


#include<math.h>
#include<stdio.h>

int main()
{
    int N = 10;
    int flag = 1;
    
    double sqroot = sqrt(N);

    for(int i = 2;i <= sqroot;i++)
    {
        if(N % i == 0){
        flag = 0;
        break;
        }
    }
    if(flag){
        printf("%d is prime number",N);
    }
    else
    {
        printf("%d is not a prime number",N);
    }
    return 0;
}