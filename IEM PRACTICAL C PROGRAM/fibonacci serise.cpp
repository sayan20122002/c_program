/*fibonaci serise*/
#include<stdio.h>
int main()
{
	int sum=0,a=1,b=0,n;
	printf("enter the value:");
	scanf("%d",&n);
	while(sum<=n)
	{
		printf("%d\t",sum);
		sum=a+b;
		a=b;
		b=sum;
	}
	
}
