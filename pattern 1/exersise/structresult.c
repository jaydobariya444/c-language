#include<stdio.h>

struct students{

    int age;
    char name[100];
};

int main()
{
    struct students st1[3];

    for(int i=0; i<3; i++){

        printf("enter age");
        scanf("%d",&st1[i].age);

        printf("enter name");
        scanf("%s",&st1[i].name);
    }
    for(int i=0; i<3; i++){

        printf("\n%d",st1[i].age);

        printf("%s",st1[i].name);

    }

    return 0;  
}