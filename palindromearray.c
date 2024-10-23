#include<stdio.h>

int main()
{
	int k;
	printf("Enter a size of array:");
	scanf("%d",&k);
	int a[k],b[k];
	int i,j,temp,count;
	printf("Enter a numbers in array:");
	for(i=0;i<k;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<k;i++)
	{
		b[i]=a[i];
	}
	for(i=0;i<k;i++)
	{
		for(j=0;j<i;j++)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	for(i=0;i<k;i++)
	{
		if(a[i]==b[i])
		{
			count+=1;
		}
	}
	if(count==k)
	{
		printf("The entered array is palindrome.");
	}
	else
	{
		printf("The entered array is not palindrome.");
	}
	printf("\npalindrome array is:");
	for(i=0;i<k;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
