#include<stdio.h>

int MajorityElement(int a[],int n)
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
			if(count>=n/2)
			{
				return a[i];
				break;
			}
		}
	}
	if(count>n/2)
	{
	    return -1;
	}
}

int main()
{
	int a[9]={6,3,6,6,5,3,6,11,6};
	int result;
	result=MajorityElement(a,9);
	printf("Result:%d",result);
}
