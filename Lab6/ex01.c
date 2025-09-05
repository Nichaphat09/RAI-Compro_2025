#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    struct profile{
        char max[100];
        int age;
        float score;
        
    }st[3];
    for(int n=0;n<3;n++){
        printf("Student %d's name : ",n+1);
        scanf(" %[^\n]*c",st[n].max);

        printf("Student %d's age : ",n+1);
        scanf("%d",&st[n].age);

        printf("Student %d's score : ",n+1);
        scanf("%f",&st[n].score);
    }
    printf("\n");
    for(int n=0;n<3;n++)
        printf("Student %d's name is %s,age %d,score %.1f\n",n+1, st[n].max,st[n].age,st[n].score);

return 0;
}