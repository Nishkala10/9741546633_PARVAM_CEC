#include<stdio.h>

int main()
{
	int n=0;
	scanf("%d",&n);
	for(int i=5;i>n;i++)
	{
		for(int j=5;j>n;j++)
		{
			printf("%d ",j-1);
		}
		printf("\n");
	}
}