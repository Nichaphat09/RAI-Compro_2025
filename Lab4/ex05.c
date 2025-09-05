#include<stdio.h>
int main()
{
    int num,sum;
    int fact = 1;

    printf("Enter a number : ");
    scanf("%d",&num);

for(int sum = 1; sum <= num ; sum++){

    fact = fact * sum;
}
printf("Factorial of %d is %d",num,fact );

return 0;
}