#include<stdio.h>
int main()
{
    int marks[5];
    int i=0;
    int total;
    int max=0;

    for(int i =0 ; i<5; i++)  
    {
        printf("Enter the marke of student %d: ",i+1);
        scanf("%d",&marks[i]);
        total += marks[i];

        if(marks[i]>max)
        max=marks[i];

    }
    printf("Total Marks : %d\n ",total);
    printf("Highes Marks : %d\n",max);

    return 0;
}