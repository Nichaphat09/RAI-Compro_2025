#include<stdio.h>
int main()
{
   int n;
   do
   {
     printf("Enter the number : ");
     scanf("%d",&n);

     if(n != 0) {
        if(n != 0){
            printf("%d is odd.\n",n);
        }
        else {
            printf("%d is even.\n",n);
        }
     }
   } while (n !=0);
   printf("Exiting Program...Bye");
   return 0;
   
}
