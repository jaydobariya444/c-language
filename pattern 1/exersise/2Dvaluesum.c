#include <stdio.h>

int main() {
    int upper,l,d=0;
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
		    printf("%d\t",a[i][j]);
// 			scanf("%d",&a[i][j]);
		}
    }
   for(int i=0; i<3; i++)
   {
        for(int j=0; j<3; j++)
        {
            if(i<j)
            {
                upper=upper+a[i][j];
                
            }
            else if(i>j)
            {
                l=l+a[i][j];
                
            }
            else 
            {
                d=d+a[i][j];
            }
            
		}
		 printf("\n");
		    
    }
    printf("%d\n%d\n%d",upper,l,d);
	

    return 0;
}