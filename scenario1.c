#include<stdio.h>
int main()
{
   int N=10,k,left;
   printf("N=10\n");
  printf("Input value:");
  scanf("%d",&k);

     
 if(N<=k)
 {
 
 printf("Invalid input!\n");
 printf("The candies left are:%d",N);
 }
 else
 {
    left=N-k;
 printf("The number of candies:%d\n",N);
 printf("The candies left are:%d\n",left);
 }
return 0;
}