#include<stdio.h>

int main()
{
	int a[5]={1,2,-4,-5,-6};
	int i,count=0,sum=0;
	for(i=0;i<5;i++)
	{
		if(a[i]<0)
		{
			count+=1;
			sum+=a[i];
		}
	}
	printf("The nagetive number sum is:%d\n",sum);
	printf("The nagetive number count is:%d",count);
}
