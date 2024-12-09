#include<stdio.h>
int main()
{
    int a[100],i,n=0,sum=0,esum=0,osum=0;
     printf("Enter the size of the arrray:");
     scanf("%d",&n);
     for(int i=0;i<n;scanf("%d",&a[i++]));
     for(int i=0;i<n;i++)
     {
      printf("%d",a[i]);
      if(a[i]%2==0)
     ;
      else
      osum+=a[i];
     }
     
     printf("Sum of even is:%d and odd is:%d",esum,osum);
     return 0;
}