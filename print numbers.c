#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter the value of upper limit:");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",i);
        i++;
    }
    return 0;
}