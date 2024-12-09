#include<stdio.h>
int main()
{
    int a[100],i,n=0,sum=0;
     printf("Enter the size of the arrray:");
     scanf("%d",&n);
     for(int i=0;i<n;scanf("%d",&a[i++]));
     for(int i=0;i<n;printf("%d",a[i]),sum+=a[i++]);
     printf("Sum of all elements is: %d",sum);
     return 0;
}