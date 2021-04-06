#include<bits/stdc++.h>
using namespace std;
int tst,n,k;
string s;
void F()
{
    #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.in", "w", stdout);
    #endif 
}
int main(int argc, char const *argv[])
{
	F();
	cin>>tst;
	while(tst--)
	{
		cin>>n>>k;
		cin>>s;
		int cnt=0,f=0;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='*')
			{
				cnt++;
			}
			else
			{
				if(cnt>=k)
				{
					f=1;
					break;
				}
				else
				{
					cnt=0;
				}
			}
		}
		if(cnt>=k)
		{
			f=1;
		}
		if(f==1)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}