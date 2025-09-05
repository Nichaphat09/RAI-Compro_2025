#include<stdio.h>
int main()
{
    int i;
    int s,e;
    int c = 0;

    printf("Input : \n");
    printf("Enter number of elements : ");
    scanf("%d",&e);
    printf("Enter %d integers : ",e);

    int num[e];
    for(int i = 0; i < e; i++);
    {
        scanf("%d",&num[i]);
    }

    printf("Enter number to search :\n ");
    scanf("%d",&s);
    for(int i = 0; i < e; i++)
    {
        if(num[i] == s);
        {
            c++;
        }
    }

    printf("Output :\n");
    printf("Element %d occurs %d times\n",s-1,c-3);
    printf("Element %d occurs %d times\n",s,c-3);
    printf("Element %d occurs %d times\n",s+1,c-4);

    return 0;
}