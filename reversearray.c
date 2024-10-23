#include<stdio.h>

int main()
{
	int a[7]={1,2,3,4,5,6,7};
	int i,j,temp;
	for(i=0;i<7;i++)
	{
		for(j=0;j<i;j++)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	printf("The reverse array is");
	for(i=0;i<7;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
