#include<stdio.h>
int main()
{
    
    int original[9]={1,2,3,4,5,6,7,8,9};

    printf("Reversed Array : ");
    
    for(int v=8 ; v>-1; v--)
    {

        printf("%d",original[v]);

    }
    return 0;
}