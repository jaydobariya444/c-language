#include<stdio.h>

int main()
{
    // int i,j;
    // for(i = 1;i <= 5;i++)
    // {
    //     for(j = 1;j <= i;j++)
    //     {
    //         printf(" *");

    //     }
    //     printf("\n");
    // }

    
    // int i,j;
    // for(i = 1;i <= 5;i++)
    // {
    //     for(j = 1;j <= i;j++)
    //     {
    //         printf(" %d",j);
    //     }
    //     printf("\n");
    // }


    // int i,j;
    // for(i = 1;i <= 5;i++)
    // {
    //     for(j = 1;j <= i;j++)
    //     {
    //         printf(" %d",i);
    //     }
    //     printf("\n");
    // }


    // int i,j,a = 0;
    // for(i = 1;i <= 5;i++)
    // {
    //     for(j = 1;j <= i;j++)
    //     {
    //         a++;
    //         printf(" %d",a);
    //     }
    //     printf("\n");
    // }


    // <<<<<<<<<<<< ANCII CODE >>> A to Z = 65 to 90, a to z = 97 to 122>>>>>>>>>>

    // int 

    // int i,j;
    // char ch = 'A';
    // for(i = 1;i <= 5;i++)
    // {
    //     for(j = 1;j <= i;j++)
    //     {
    //         printf(" %c",ch);
    //         ch++;
    //     }
    //     printf("\n");
    // }
    

    // int i,j;
    // char ch = 'A';
    // for(i = 1;i <= 5;i++)
    // {
    //     for(j = 1;j <= i;j++)
    //     {
    //         printf(" %c",ch);
    //     }
    //     ch++;
    //     printf("\n");
    // }

    // int i,j;
    // char ch = 'A';
    // for(i = 5;i >= 1;i--)         //row
    // {
    //     for(j = 1;j <= i;j++)    // column
    //     {
    //         printf(" %c",ch);
    //         ch++;
    //     }
    //     printf("\n");
    // }


    // int i,j,k;
    // for(i = 1;i <= 5;i++)
    // {
    //     printf("\n");
    //     for(j = 1;j <= 5-i;j++)
    //     {
    //         printf("  ");
    //     }
    //     for(k = 1;k <= 5-j;k--)
    //     {
            
    //         printf(" *",k);
    //     }
    //     // k--;
    //     // printf(" * ");
    // }

    // int i,j,k,l,m,n,o,p;
    // float per;

    // printf("enter subject marks:- \n");
    // scanf("%d%d%d%d%d%d%d%d",&i,&j,&k,&l,&m,&n,&o,&p);

    // per = (i+j+k+l+m+n+o+p)/8.0;
    // printf("your per is %.2f",per);

    // if(per >= 90)
    // {
    //     printf(" Grade Is A\n");
    // }
    // else if(per >= 75)
    // {
    //     printf(" Grade Is B\n");
    // }
    // else if(per >= 60)
    // {
    //     printf(" Grade Is C\n");
    // }
    // else if("per > 35")
    // {
    //     printf(" Grade is D\n");
    // }
    // else 
    // {
    //     printf(" You Are Fail");
    // }


    // int a,b,c,n=5;
    // for(a = 1;a <= 5;a++)
    // {
    //     for(b = 1;b <= n;b++)
    //     {
    //         printf(" ");
    //     }
    //     n--;
    //     for(c = 1;c <= a;c++)
    //     {
    //         printf("%d",a);
    //     }
    //     printf("\n");

    // }


    // int a,b,c,n=5;
    // for(a = 1;a <= 5;a++)
    // {
    //     for(b = 1;b <= n;b++)
    //     {
    //         printf(" ");
    //     }
    //     n--;
    //     for(c = 1;c <= a;c++)
    //     {
    //         printf(" %d",b);
    //     }
    //     printf("\n");.

    int n = 7;
    for(int i = 0;i < 2*n-1;i++)
    {
        int comp;
        if(i < n){
            comp = 2*(n - i) - 1;
        }
        else 
        {
            comp = 2*(i - n + 1) + 1;
        }
        for (int j = 0;j < comp;j++)
        {
        printf(" ");
    
        }
        for(int k=0;k<2*n-comp;k++){
        printf("* ");
        }
        printf("\n"); 
        
    }
    return 0;
}