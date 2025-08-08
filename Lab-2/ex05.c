#include<stdio.h>
int main()
{
    char name[50];
    int age;
    float height;
    char university[50];

    printf("Enter full your name :");
    scanf("%[^\n]",name);

    printf("Enter your age:");
    scanf("%d",&age);

    printf("Enter your height:");
    scanf("%f",&height);

    printf("Enter your university name:");
    scanf(" %[^\n]", university );

    printf("Hi! Everyone. This is k.%s from %s. I am %d years old and my height is %3.1f cm tall",name,university,age,height);

    return 0;
}