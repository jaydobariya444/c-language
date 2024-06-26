#include<stdio.h>

int main()
{
    // int i;
    // for (i = 0; i < 5;i++){
    //       printf("%d\n",i);
    // }

    // int b;
    // for(int i = 1;i <= 5;i++){
    //     printf("%d\n",i);
    // }

    // int a;
    // for (a = 50; a < 70;a++){
    //     printf("%d\n",a);
    // }

    // int i;
    // for (i = 51; i < 60;i++){
    //     printf("Princekumar\n",i);
    // }

    // int i;
    // for (i = 10;i < 20;i++){
    //     printf("jaykumar\n",i);
    // }

    // int a=1;
    // for(int i = 1;i<= 5;i++){
    //     for(int j = 1; j <= i;j++){
    //         printf("%d ",a);
    //         a++;
    //     }
    //     printf("\n");
    // }

    // int b = 3;
    // for (int i = 3;i < 8;i++){
    //     for(int j = 3;j < i;j++){
    //         printf("%d ",b);
    //         b++;
    //     }
    //     printf("\n");
    // }
   
    // int a = 2;
    // for (int i = 2;i <= 6;i++){
    //     for (int j = 2;j <= i;j++){
    //         printf("%d ",a);
    //         a++;
    //     }
    //     printf("\n");
    // }
    
    // int a = 10;
    // for (int i = 10;i <= 20;i++){
    //     for (int j = 10;j <= i;j++){
    //         printf("%d ",a);
    //         a++;
    //     }
    //     printf("\n");
    // }

    // int z = 5;                                           // 5 
    // for (int i = 5;i <= 10;i++){                         // 5 6 
    //     for (int j = 5;j <= i;j++){                      // 5 6 7  
    //         printf("%d ",z);                             // 5 6 7 8      
    //         z++;                                         // 5 6 7 8 9
    //     }
    //     printf("\n");
    // }


    // for(int i = 1;i <= 5;i++){
    //     for(int j = 1; j <= i;j++){
    //         printf("%d ",j);
    //     }
    //     printf(" \n");
    // }

    // for(int i = 1;i<=5;i++){                         // 1 
    //     for (int j = 1;j <= i;j++){                  // 1 2 
    //         printf("%d ",j);                         // 1 2 3    
    //     }                                            // 1 2 3 4               
    //     printf("\n");                                // 1 2 3 4 5              
    // }


    // for(int i=0;i<=7;i++){                          //         *
    //     printf("\n");                               //       * *
    //     for(int j=0;j<=7-i;j++){                    //     * * *
    //         printf(" ");                            //   * * * *
    //                                                 // * * * * *
    //     }
    //     for(int k = 0;k <= i;k++){
    //         printf("*",k);
    //     }
    // }

    // for (int i = 1;i < 8;i++){                      //         1   
    //     printf("\n");                               //       1 2
    //     for(int j = 1;j < 8-i;j++){                 //     1 2 3 
    //         printf(" ");                            //   1 2 3 4
    //     }                                           // 1 2 3 4 5
    //     for(int k = 1;k < i;k++){                   
    //         printf("%d",k);
    //     }
    // }

    // for (int i = 1;i < 8;i++){                      // * * * * * *
    //     printf("\n");                               // * * * * *
    //     for(int j = 1;j < i;j++){                   // * * * * 
    //         printf("");                            // * * *   
    //     }                                           // * *   
    //     for(int k = 1;k <8-i;k++){                  // *           
    //         printf(" %d",k);                                       
    //     }
    // }

    // for (int i = 1;i < 8;i++){
    //     printf("\n");
    //     for(int j = 1;j < 8;j++){               00000
    //         printf(" ");
    //     }
    //     for(int k = 1;k < 8+i;k++){
    //         printf("%d",k);
    //     }
    // }


    // int z = 1;                                      // 1 2 3 4 5 6 7 8
    // for (int i = 1;i <= 9;i++){                     // 9 10 11 12 13 14 15 
    //     printf("\n");                               // 16 17 18 19 20 21 
    //     for (int j = 1;j <= 9-i;j++){               // 22 23 24 25 26     
    //         printf(" %d",z);                        // 27 28 29 30 
    //         z++;                                    // 31 32 33
    //     }                                           // 34 35
    // }                                               // 36

    // int a = 1;
    // for(int i = 1;i<=8;i++){                           // 1 1 1 1 1 1
    //     printf("\n");                                  //  2 2 2 2 2 
    //     for (int j = 1;j <= i;j++){                    //   3 3 3 3
    //         printf(" ");                               //    4 4 4
    //     }                                              //     5 5
    //     for(int k = 1;k <=8-i;k++)                     //      6                                   
    //     printf(" %d",a);
    //     a++;                                             
    // }

    // int a = 1;
    // for(int i = 1;i<=8;i++){                           // * * * * * *
    //     printf("\n");                                  //  * * * * * 
    //     for (int j = 1;j <= i;j++){                    //   * * * *
    //         printf(" ");                               //    * * *
    //     }                                              //     * *
    //     for(int k = 1;k <=8-i;k++)                     //      *                                   
    //     printf(" *",a);
    //     a++;                                             
    // }

    // int a = 1;
    // for(int i = 1;i<=8;i++){                           // 1 1 1 1 1 1
    //     printf("");                                  //  2 2 2 2 2 
    //     for (int j = 1;j <=8-i;j++){                    //   3 3 3 3
    //         printf(" %d",a);
    //         a++;                               //    4 4 4
    //     }                                              //     5 5
    //     for(int k = 1;k <= i;k++)                     //      6                                   
    //     printf("\n");                                             
    // }

    // int a = 6;
    // for (int i = 6;i <= a;i++){                      //         1   
    //     printf(" ");                               //       1 2
    //     for(int j = 6;j < a;j++){                 //     1 2 3 
    //         printf("%d ",j);                            //   1 2 3 4
    //     }                                           // 1 2 3 4 5
    //     for(int k = 6;k >= 1;k--){                   
    //         printf("\n");
    //     }
    // }
    
    // for (int i = 1;i < 8;i++){                      // * * * * * *
    //     printf("\n");                               // * * * * *
    //     for(int j = 1;j < 8;j++){                   // * * * * 
    //         printf(" ");                            // * * *   
    //     }                                           // * *   
    //     for(int k = 1;k <8-i;k++){                  // *           
    //         printf(" *",k);                                       
    //     }
    // }
  
      //   int i,j;
      //   int a = 5;
      // // printf("\nEnter the value:");
      // // scanf("%d",&a);
      // for(int i=1;i<=a;i++)
      // {
      //   printf(" %d",a);
      //   a++;
      //   for(int j=1;j<=i;j++)
      //   {
      //     printf(" ");
      //   }
      //   for(int j=1;j<=(a-i+1);j++)
      //   {
      //     printf("*",j);
      //     j++;
      //   }
      //   printf("\n");
      // }
    
    //   int a = 5;
    //   for(int i = 0;i < a;i++){
    //     for(int j = 0;j < 2*i;j++){
    //         printf(" ");
    //     }
    //     for(int k = 0;k < a-i;k++){
    //         printf("* ");
    //     }
    //     printf("\n");
    //   }
    
    //     int a;
    //     for(int i = 0;i < 5;i++){
    //     for(int j = 0;j < 2*5+i;j++){
    //         printf(" ");
    //     }
    //     for(int k = 0;k < 5-i;k++){
    //         printf("*");
    //     }
    //     printf("\n");
    //   }
    
    // for (int i = 0;i < 8;i++){                      // * * * * * *
    //     printf("\n");                               // * * * * *
    //     for(int j = 1;j < 8-i;j++){                 // * * * * 
    //         printf("");                             // * * *   
    //     }                                           // * *   
    //     for(int k = 1;k < 8-i;k++){                 // *           
    //         printf("* ",k);                                       
    //     }
    // }

    // int i,j;
    // for(i = 1;i <= 5;i++)
    // {
    //     for(j = 1;j <= i;j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    // for (int i = 1;i <= 8;i++){                      // * * * * * *
    //     printf("\n");                               // * * * * *
    //     for(int j = 1;j <= 8-i;j++){                   // * * * * 
    //         printf("  ");                            // * * *   
    //     }                                           // * *   
    //     for(int k = i;k >= 1;k--){                  // *           
    //         printf("%2d",k);                                       
    //     }
    // }

  // int i;
  // for(i = 0;i <= 10;i++)
  // {
  //     if(i == 2 || i == 6 || i == 9)
  //     {
  //       continue;
  //     }
  //     printf("%d    ",i);
  // }
  
  
}