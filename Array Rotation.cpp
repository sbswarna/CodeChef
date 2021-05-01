#include<bits/stdc++.h>
using namespace std;
long long n,q,x[100005],a[100005];
void F()
{
    #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.in", "w", stdout);
    #endif 
}
int main()
{
    F();
    cin>>n;
    long long mod=1000000007,sum=0,y=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum=(sum%mod+(mod+(a[i]%mod))%mod)%mod;
    }
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>x[i];
        sum=((2%mod)*(mod+(sum%mod)))%mod;
        cout<<sum<<endl;
    }
    return 0;
}
