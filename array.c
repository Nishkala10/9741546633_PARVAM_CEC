/*Print the array elements taking the input from the user*/
#include<stdio.h>
int main()
{
    int a[100],i,n=0;
     printf("Enter the size of the arrray:");
     scanf("%d",&n);
     for(int i=0;i<n;scanf("%d",&a[i++]));
     for(int i=0;i<n;printf("The elements are:%d\n",a[i++]));
     
     return 0;
}