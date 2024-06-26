// A prime number is a natural number greater than 1 that is completely divisible only by 1 and itself. For example, 2, 3, 5, 7, 11, etc. are the first few prime numbers.

// In this article, we will explore a few prime number programs in C to check whether the given number is a prime number or not.
#include<stdio.h>

int checkprime(int N)
{
    int flage = 1;
    for(int i = 2;i <= N/2;i++)
    {
        if (N % i == 0)
        {
            flage = 0;
            break;
        }
    }
    if(flage)
    {
        printf("the number is %d is a Prime Number\n",N);
    }
    else
    {
        printf("the number is %d is a Non Prime Number\n",N);

    }
    return 0;
}

int main()
{
    int N = 2;
    checkprime(N);
    return 0;
}
