#include<bits/stdc++.h>
using namespace std; 

int main()
{
/*	string len;
	int flag;
	char len2[100];
	cin>>len;
	int index=0;
	for(int i=0;i<len.length();i++)
	{
		int j;
		for( j=0;j<i;j++){
		
			if(len2[j]==len[j])
			{
			flag=1;
			break;
			}
		}
			
			
			if(flag==0)
			len2[index++]=len[i];
	}
	cout<<len2;
*/

string learn;
cin>>learn;

set<char> s; 
for(int i=0;i<learn.length();i++)
s.insert(learn[i]);

for (auto x:s)
cout<<x;
	
}
