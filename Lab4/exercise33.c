#include<stdio.h>
int main()
{
    int number = 3;
    int sum = 0;
    int result;

    do
    {
        printf("Enter a number : ");
        scanf("%d",&number);
        sum += number;
    }
    while (number != 0);
    {
        printf("result : %d\n",sum += number);
    }
    
    return 0;
}