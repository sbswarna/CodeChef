#include<bits/stdc++.h>
using namespace std;
int tst,x,a,b;
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
		cin>>x>>a>>b;
		cout<<(a+((100-x)*b))*10<<endl;
	}
	return 0;
}