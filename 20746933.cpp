#include<bits/stdc++.h>
using namespace std;
long long a,b,k,tst;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>a>>b>>k;
        long long x=(a+b)/k;
        if(x%2==0)
            cout<<"CHEF"<<endl;
        else
            cout<<"COOK"<<endl;
    }
    return 0;
}
