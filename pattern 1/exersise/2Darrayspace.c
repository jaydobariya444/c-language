#include <stdio.h>

int main() {
    
    int a[3][3];
    for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
		    printf("enter array:-");
			scanf("%d",&a[i][j]);
		}
    }
   for(int i=0; i<3; i++)
   {
        for(int j=0; j<3; j++)
        {
            if(a[i][j]==0)
            {
                 printf("\t");
            }else{
                printf("%d\t",a[i][j]);
               
            }
            
		}
		 printf("\n");
		    
    }
    
	

    return 0;
}