#include<stdio.h>
int main()
{
	int n,i,count=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	     if(i%2==0)
	     count++;
	}
	if(count==n)
	{
		printf("%d ",i);
	}
}
