#include<bits/stdc++.h>
using namespace std;
long long tst,n;
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
		cin>>n;
		if(n==1)
		{
			cout<<20<<endl;
		}
		else if(n==2)
		{
			cout<<36<<endl;
		}
		else if(n==3)
		{
			cout<<51<<endl;
		}
		else if(n==4)
		{
			cout<<60<<endl;
		}
		else if(n==5)
		{
			
			cout<<76<<endl;
		}
		else if(n==6)
		{
			cout<<88<<endl;
		}
		else if(n==7)
		{
			cout<<99<<endl;
		}
		else if(n==8)
		{
			cout<<104<<endl;
		}
		else
		{
			long long p=n/4;
			p--;
			if(n%4==1)
			{
				cout<<(p*44)+76<<endl;
			}
			else if(n%4==2)
			{
				cout<<(p*44)+88<<endl;
			}
			else if(n%4==3)
			{
				cout<<(p*44)+99<<endl;
			}
			else
			{
				cout<<(p*44)+60<<endl;
			}
		}
	}
	return 0;
}