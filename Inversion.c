#include<stdio.h>

int Inversion(int arr[],int n)
{
	int i,j,count;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				printf("(%d,%d)",arr[i],arr[j]);
				count+=1;
			}
		}
	}
	printf("\n%d",count);
}

int main()
{
	int arr[]={7,2,6,3};
	Inversion(arr,4);
	return 0;
}
