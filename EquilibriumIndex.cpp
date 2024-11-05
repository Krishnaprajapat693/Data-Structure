#include<iostream>

using namespace std;
int EquilibriumIndex(int arr[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		int leftsum=0;
		int rigthsum=0;
		for(j=0;j<i;j++)
		{
			leftsum+=arr[j];
		}
		for(j=i+1;j<n;j++)
		{
			rigthsum+=arr[j];
		}
		if(leftsum==rigthsum)
		{
			return i+1;
		}
	}
	return -1;
}
int main()
{
	int arr[]={-7, 1, 5, 2,-4, 3, 0};
	int n=sizeof(arr)/sizeof(int);
	cout<<EquilibriumIndex(arr,n);
	return 0;
}
