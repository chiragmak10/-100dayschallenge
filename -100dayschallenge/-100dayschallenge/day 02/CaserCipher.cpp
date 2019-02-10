#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size;
	cin>>size;
	while(size--)
	{
		int len=-1,flag=0;
		int val;
		string s,t;
		cin>>s>>t;
		for(int i=0;i<s.length();i++)
		{
			
			if(val=((int)t[i]-(int)s[i]))
			
			val=((val+26)%26);
			
			if(len==-1)
			{
				len=val;
			}
			else if(len==val)
			{
				continue;
			}
			else
			{
				flag=1;
			}
			
			
		}
		if(flag==1)
			{
				cout<<"-1"<<endl;
			}
			else
			cout<<val<<endl;
	}
}
