/*sort on array*/
#include<stdio.h>
int main()
{
	int arr[5];
	int n,i,y,swap;
	printf("enter the range of the array:\n");
	scanf("%d",&n);
	printf("enter the value in the array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(y=i+1;y<n;y++)
		{
			if(arr[i]>arr[y])
			{
				swap=arr[i];
				arr[i]=arr[y];
				arr[y]=swap;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}
