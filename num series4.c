#include<stdio.h>
int main()
{
    int i=4;
    int n;
    printf("Enter the upper limit value");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i!=8)
    printf("%d\n",i);
    i*=2;
    }
    return 0;
}