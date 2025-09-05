#include<stdio.h>
int main()
{
    int i=0;
    int num;
    int evan=0;
    int odd=0;
    int v[10];

    for(int i = 0; i<10;i++)
    {
        printf("Enter value %d : ",i+1);
        scanf("%d",&num);

        if(num%2 == 0){
            evan++;
        }
        else{
            odd++;

        }
    }
    printf("Even number : %d\n",evan);
    printf("Odd number : %d\n ",odd);
    return 0;
}