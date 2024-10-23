#include<iostream>

using namespace std;
int max(int a[],int end)
{
	int m=0;
	for(int i=1;i<=end;i++)
	{
		if(a[m]<a[i])
		{
			m=i;
		}
	}
	return m;
}
int main()
{
	int a[]={1,5,4,10,7,8,9,3,1};
	int n=sizeof(a)/sizeof(int);
	int k=6;
	
	if(k>n)
	{
		cout<<"Invalid.";
	}
	int x;
	int ans;
	int temp;
	int end =n-1;
	
	for(int i=0;i<k;i++)
	{
		x=max(a,end);
		ans=a[x];
		
		temp =a[x];
		a[x]=a[end];
		a[end]=temp;
		end--;
	}
	cout<<ans;
	return 0;
}
