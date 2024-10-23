#include<stdio.h>
int Subarray(int nums[], int n)
{
	int i,j,k;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			int sum=0;
			printf("Subarray is: ");
			for(k=i;k<=j;k++)
			{
				printf("%d ",nums[k]);
				sum=sum+nums[k];
			}
			int p=nums[0];
			printf("\n");
			if(sum>p)
			{
				printf("sum is %d \n ",sum);	
			}
			else
			{
				p=sum;
			}		
		}
	}
}

int main()
{
	int nums[]={-2,1,-3,4,-1,2,1,-5,4};
	Subarray(nums,9);
}
