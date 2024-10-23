#include<iostream>
#include<string>
using namespace std;

bool palindrome(string s)
{
	int end = s.length()-1;
	for(int i=0;i<s.length()/2;i++)
	{
		if(s[i]!=s[end])
		{
			return false;
		}
		end--;
	}
	return true;
}
int main()
{
	string s = "A man, a plan , a canal: Panama";
	string s2="";
	for(int i=0;i<s.length();i++)
	{
		if(int(s[i])>=65 && int(s[i])<=90)
		{
			s2+=char(int(s[i])+32);
		}
		else if(int(s[i])>=97&&int(s[i])<=122)
		{
			s2+=s[i];
		}
	}
	cout<<palindrome(s2);
	return 0;
}
