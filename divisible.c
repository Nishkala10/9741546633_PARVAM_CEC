//write a program to check if the number is divisible between m and n//
#include<stdio.h>
int main()
{
    int ll=0;ul=10;counter=0;
    scanf("%d%d",&ll,&ul);
    counter=11;
    while(counter<=ul)
    {
        if(counter%5==0)
        printf("%d,",counter);
        counter++;
    }       
     return 0;
}