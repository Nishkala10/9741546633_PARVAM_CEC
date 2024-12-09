/*Summation of n numbers using loop*/
#include<stdio.h>
int main()
{
    int i,n,sum=0;
     printf("Enter the number of terms: ");
     scanf("%d",&n);
     printf("First %d natural numbers are:\n",n);
     for(i=1;i<=n;i++)
     {
        sum=sum+i;
        printf("%d\n",i);
     }
     
     printf("The sum of %d is %d\n",n,sum);
     return 0;
}