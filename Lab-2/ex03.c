#include<stdio.h>
int main()
{
    char name[25];
    int Age;
    float height;
    float weight;
    char gender;
    char Education [50];

    printf("Enter your Name :");
    scanf("%[^\n]",name);

    printf("Enter your Age:");
    scanf("%d",&Age);

    printf("Enter your height :");
    scanf("%f",&height);

    printf("Enter your weight :");
    scanf("%f", &weight);

    printf("Enter your gender :");
    scanf("%s",&gender);

    printf("Enter your Education Qualification :");
    scanf(" %[^\n]", Education );

    return 0;

}