/*sum of all element in the array*/
#include<stdio.h>
int main()
{
	int arr[5];
	int n,i,sum=0;
	printf("enter the array range:\n");
	scanf("%d",&n);
	printf("enter the value in the array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		
		sum+=arr[i];
	}
	printf("the sum of all element in the array:%d",sum);
}
