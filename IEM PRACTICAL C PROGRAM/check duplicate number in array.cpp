/*check duplicate number in array*/
#include<stdio.h>
int main()
{
	int arr[5];
	int i,n,y,count=0,flag=0;
	printf("enter the range of array:");
	scanf("%d",&n);
	printf("enter the value in the array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("duplicate number in the array......\n");
	for(i=0;i<n;i++)
	{
		for(y=i+1;y<n;y++)
		{
			if(arr[i]==arr[y])
			{
				flag=1;
				count++;
				if(flag==1)
				{
					printf("%d\n",arr[i]);
				}
				break;
			}
		}
	}
		if(flag==0)
		{
			printf("not found duplicate number.....");
		}
	printf("How many times numbers are find duplicate in the array:%d",count);
}
