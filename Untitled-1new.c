#include<stdio.h>

int main(){
for (int i = 1;i <=8;i++){                      // * * * * * *
        printf("\n");                               // * * * * *
        for(int j = 1;j <=i;j++){                   // * * * * 
            printf("");                            // * * *   
        }                                           // * *   
        for(int k = 1;k >=8-i;k++){                  // *           
            printf("* ",k);                                       
        }
    }

    

}