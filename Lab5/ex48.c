#include<stdio.h>
#define size 3
int main()
{
    int A[size][size]={{1,0,-1},{-1,2,3},{2,4,5}};
    int i,j,k;
    int result[size][size];

    for( i =0; i<size ;i++)
    {
        for(j = 0;j<size ; j++)
        {
            result[i][j] =0;
            for ( k = 0; k < size; k++)
            {
                result[i][j]+=A[i][k]*A[k][j];
            }
        }
    }
    printf(" \nA x A =\n");
    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
        printf("%5d",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}