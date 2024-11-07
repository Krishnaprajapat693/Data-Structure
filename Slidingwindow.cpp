#include<iostream>

using namespace std;

int SlidingWindow(int arr[],int n,int k)
{
	int i,j;
	int max=0;
	for(i=0;i<n-k+1;i++)
	{
		int sum=0;
		for(j=0;j<k;j++)
		{
			sum+=arr[i+j];
		}
		if(max<sum)
		{
			max=sum;
		}
	}
	return max;
}

int main()
{
	int arr[]={1, 4, 2, 10, 23, 3, 1, 0, 20};
	int n=sizeof(arr)/sizeof(int);
	int k=4;
	cout<<SlidingWindow(arr,n,k);
	return 0;
} 
