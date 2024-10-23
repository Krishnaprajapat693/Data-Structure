#include<stdio.h>

int DuplicateNumber(int a[],int n)
{
	int count,i,j;
	for(i=0;i<n;i++)
	{
		
		if(a[i]!=0)
		{
			count=1;
			for(j=i+1;j<n;j++)
			{
				if(a[i]==a[j])
				{
					count+=1;
					a[j]=0;
				}
			}
			if(count>=2)
			{
				printf("The duplicate number is %d \n",a[i]);
			}
		}
	}
}
int main()
{
	int a[9]={6,3,6,6,5,3,6,11,6};
	DuplicateNumber(a,9);
}
