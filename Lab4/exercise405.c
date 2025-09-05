#include<stdio.h>
int main()
{
    int num = 0;
    int sum = 0;


    printf("Multiplication table : %d\n",num);
    for(int num = 5; sum <= 12; sum++)
    {
        printf("%d * %d = %d\n" ,num,sum,num*sum);
    }
    return 0;
}