#include<stdio.h>
int main()
{
    int i=1,n=0;
    printf("Enter the upper limit value");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2!=0)
        printf("%d\n ",i*i);
        i++;

    }
   
   
    return 0;
}
