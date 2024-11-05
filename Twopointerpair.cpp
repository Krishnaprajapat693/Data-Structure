#include<iostream>

using namespace std;
int TwoPointer(int arr[],int n,int target)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(arr[i]+arr[j]==target)
			{
				return true;
			}
		}
	}
}
int anotherapproach(int arr[],int n,int target)
{
	int i;
	int k=0;
	int p=n;
	for(i=0;i<n;i++)
	{
		int first=arr[k];
		int last=arr[p];
		if(first+last==target)
		{
			return true;
		}
		else if(first+last<target)
		{
			k++;
		}
		else
		{
			p--;
		}
	}
}
int main()
{
	int arr[]={1, 2, 4, 5, 7, 11};
	int n=sizeof(arr)/sizeof(int);
	int target = 9;
	cout<<TwoPointer(arr,n,target);
	cout<<anotherapproach(arr,n,target);
}
