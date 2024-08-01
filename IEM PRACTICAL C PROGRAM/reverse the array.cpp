/*to print reverse array*/
#include<stdio.h>
int main()
{
	int arr[5];
	int i,n;
	printf("enter the range os the array:\n");
	scanf("%d",&n);
	printf("enter the value in the array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Reverse order by the array:\n");
	for(i=n-1;i>=0;i--)
	{
		printf("%d\t",arr[i]);
	}
}
