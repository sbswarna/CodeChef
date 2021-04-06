#include<bits/stdc++.h>
using namespace std;
double k1,k2,k3,v;
int tst;
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
		cin>>k1>>k2>>k3>>v;
		double thresh=9.58;
		double ans=100.00/(k1*k2*k3*v);
		if(abs(ans-thresh)<=0.005)
			ans=thresh;
		if(ans<thresh)
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