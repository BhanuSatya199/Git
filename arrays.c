#include<stdio.h>
int main()
{
	int n,i;//size
	scanf("%d",&n);//reading the size of array
	int arr[n];//arr is name of the array
	//reading array elements
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}
