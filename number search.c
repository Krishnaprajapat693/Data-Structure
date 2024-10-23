#include<stdio.h>

int main()
{
	
	int i,n,m,k=0,j;
	printf("Enter a size of array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter a number in array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter a number to search in array:");
	scanf("%d",&m);
	
	for(i=0;i<n;i++)
	{
		k+=1;
		if(m==a[i])
		{
			printf("The %d index number is:%d",m,k);
		}
	}
	return 0;
}
