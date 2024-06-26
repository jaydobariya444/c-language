#include<stdio.h>

struct students{

    int total, sub[5];
    float per;
    char name[100]
};

int main()
{

    struct students st1[3];

    int i;
    for(int i=0; i<3; i++){
        printf("enter name");
        scanf("%s",&st1[i].name);
    
        st1[i].total=0;
        st1[i].per=0;

        for(int j=0; j<5; j++){
                printf("enter sub marks:-");
                scanf("%d",&st1[i].sub[j]);
                
                st1[i].total+=st1[i].sub[j];
                st1[i].per=st1[i].total/5.0;
                
            }

            printf("%d\n",st1[i].total);
            printf("%f\n",st1[i].per);

    
 
    }
    return 0;
}