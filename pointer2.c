#include<stdio.h>
int main()
{
    int n=0,*p=&n;
    scanf("%d",&n);
    *p=34;
    printf("Var n value %d",n);
    return 0;
}