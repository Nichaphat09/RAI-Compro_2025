#include<stdio.h>
int main()
{
    int A[3][3]={{1,-1,2},{0,2,4},{-1,3,5}};
    int r,c;

    printf("\nTranspose of A =\n");
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            printf("%5d",A[r][c]);
        }
        printf("\n");
    }
    return 0;
}