#include<stdio.h>

int main()
{
    // int a, b;
    // a = 45;
    // b = 45;
    // if(a == b) {
    //     printf("true");
    // }else
    // {
    //     printf("false");
    // }


    // float a,b;
    // a = 98.25;
    // b = 65.25;
    // if(a <= b)
    // {
    //     printf("true");
    // }else
    // {
    //     printf("false");
    // }
    
    
    // chemistry, computer, maths, physics, biology

    // int ch, co, mt, ph, bio;
    // float per;

    // printf("enter the 5 subject mark :-");
    // scanf("%d%d%d%d%d",&ch,&co,&mt,&ph,&bio);

    // per = (ch + co + mt + ph + bio)/ 5.0;
    // printf("your per is %.2f\n",per);
    
    // if(per >= 90){
    //     printf("grade is A\n");
    // }
    // else if (per >= 80){
    //     printf("grade is B\n");
    // }
    // else if (per >= 60){
    //     printf("grade is C\n");
    // }
    // else if (per >= 50){
    //     printf("grade is D\n");
    // }
    // else if (per >= 40){
    //     printf("grade is E\n");
    // }
    // else{
    //     printf("Fail");
    // }

    // int ch, gj, dr, ph, mt, ss, bio, co;
    // float per;

    // printf("enter your 5 subjects marks = ");
    // scanf("%d%d%d%d%d%d%d%d",&ch,&gj,&dr,&ph,&mt,&ss,&bio,&co);

    // if (ch<30 || gj<30 || dr<30 || ph<30 ||mt<30 ||ss<30 || bio<30 || co<30)
    // {
    //     printf("sorry... you are fail \n");
    // }

    // per = (ch + gj + dr + ph + mt + ss + bio + co) / 8.0;
    // printf("your per is %.2f\n",per);

    // if(per >= 90){
    //     printf("grade is A\n");
    // }
    // else if (per >= 75){
    //     printf("grade is B\n");
    // }
    // else if (per >= 60){
    //  
    
       printf("grade is C\n");
    // }
    // else if (per >= 45){
    //     printf("grade is D\n");
    // }
    // else if (per >= 35){
    //     printf("grade is E\n");
    // }
    // else{
    //     printf("fail");
    // }
       
    // return 0;


    int c,p,d,a,f;
    float per;

    printf("enter 5 subjects marks:-");
    scanf("%d%d%d%d%d",&c,&p,&d,&a,&f);

    per = (c+p+d+a+f)/5.0;
    printf("enter per %.2f",per);

    if(per >= 90){
        printf(" Grade is A\n");
    }
    else if(per >= 75){
        printf(" Grade is B\n");
    }
    else if(per >= 60){
        printf(" Grade is C\n");
    }
    else if(per >= 35)
    {
        printf(" Grade is D\n");
    }
    else
    {
        printf(" You Are Fail");
    }

}
    

