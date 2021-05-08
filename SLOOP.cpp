#include<bits/stdc++.h>
using namespace std;
int tst,n,m;
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
		cin>>n>>m;
		cout<<n/m<<endl;
	}
	return 0;
}