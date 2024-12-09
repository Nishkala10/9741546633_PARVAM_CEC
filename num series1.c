//
#include<stdio.h>
int main()
{
    int i=0,n=0;
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d ",i);
        i=i*i;
        i++;
    }
    
    return 0;
}