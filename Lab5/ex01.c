#include<stdio.h>
int main()
{
    int v[10];

    for( int n=0;n<10;n++){
        printf("Enter the value %d here : ",1+n);
        scanf("%d",&v[n]);
    }

    printf("Values in array are : ");
    for(int n =0 ;n<10;n++){
        
        if(n==9){
            printf("%d\n",v[n]);
        }
        else {
            printf("%d,",v[n]);
        }
    }
    return 0;
}