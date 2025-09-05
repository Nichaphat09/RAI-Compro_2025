#include<stdio.h>
int main()
{
    int a=0,sum =0;
    float Average;

    for (int n = 0; n < 10; n++) {
        printf("Enter number: ");
        scanf("%d", &a);
        sum += a; 
    
    }
    Average = sum/10.00;
    printf("total sum is : %d\n",sum);
    printf("Average is : %2f\n",Average);
    
    return 0;
}