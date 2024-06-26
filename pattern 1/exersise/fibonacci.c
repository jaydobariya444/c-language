#include <stdio.h>

int mark=0, total;
float per;
char name;

int s(){
    
    printf("Enter the name of Student:-");
    scanf("%c",&name);
    
    printf("\n");
    
    printf("Enter the Mark of Student:-");
    scanf("%d",&mark);
    total+=mark;
    
    printf("Enter the Mark of Student:-");
    scanf("%d",&mark);
    total+=mark;
    
    printf("Enter the Mark of Student:-");
    scanf("%d",&mark);
    total+=mark;
    
    printf("Enter the Mark of Student:-");
    scanf("%d",&mark);
    total+=mark;
    
    printf("Enter the Mark of Student:-");
    scanf("%d",&mark);
    total+=mark;
    
    printf("\n");
    
    // for(int i=1; i<=5; i++){
        
    //     scanf("%d",&i);
    //     printf("%d",i);
        
    //     printf("\n");
        
    //     return 0;
    // }
    
    
    printf("%d",total);
    
    printf("\n");
}

int main() {
    
    s();
    per=(total*100)/500;
    printf("Percentage is :- %.2f",per);
    
    return 0;
}