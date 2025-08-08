#include<stdio.h>
int main()
{
    char name[25];
    int studentID;
    float Programming,Physics,Calculus, gpa;

    printf("Enter your name :");
    scanf("%[^\n]",name);

    printf("Enter you student ID :");
    scanf("%d",&studentID);

    printf("Enter your Programming score :");
    scanf("%f",&Programming);

    printf("Enter your Physics score :");
    scanf("%f",&Physics);

    printf("Enter your Calculus score :");
    scanf("%f",&Calculus);

    gpa = (Programming+Physics+Calculus)/3;
    

    return 0;
}