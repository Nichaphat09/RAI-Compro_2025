#include<stdio.h>
int main()
{
    int num,sum=0;

    printf("Enter a number : ");
    scanf("%d",&num);

    printf("Multiplication Table for %d :\n",num);
    for(int num = 1; sum <= 12; sum++)
    {
        printf("%d * %d = %d\n",num,sum,num*sum);
    }
 return 0;
}