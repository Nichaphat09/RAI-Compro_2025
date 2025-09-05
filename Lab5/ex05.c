#include<stdio.h>
int main()
{
    int n[8];
    int i=0;
    int sm;
    int la;
    la=n[0];
    for(i=0; i<8;i++)
    {
        printf("Enter number %d :",i+1);
        scanf("%d",&n[i]);

    }
    sm=n[1];
    for(i=0; i<8;i++)
    {
        if(n[i]<sm){
        sm=n[i];
        }
    else(n[i]>la);
    {
        la=n[i];
    }
}
    printf("Smallest number : %d\n ",sm);
    printf("Largest number : %d\n ",la);
    
    return 0;
}