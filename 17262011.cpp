#include<bits/stdc++.h>
using namespace std;
long long tst,i,m,n,x,k,e,o;
string s;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n>>m>>x>>k;
        cin>>s;
        long long odd=0,even=0;
        for(i=0; i<s.size(); i++)
        {
            if(s[i]=='O')
                odd++;
            else
                even++;
        }
        if(m%2==0)
        {
            e=m/2;
            o=e;
        }
        else
        {
            e=m/2;
            o=e+1;
        }
        if(m*x>=n)
        {
            long long ans;
            if(o*x<=odd)
            {
                ans=o*x;
            }
            else
            {
                ans=odd;
            }
             if(e*x<=even)
            {
                ans+=e*x;
            }
            else
            {
                ans+=even;
            }
            if(ans>=n)
                cout<<"yes"<<endl;
            else
                cout<<"no"<<endl;
        }
        else
            cout<<"no"<<endl;
    }
    return 0;
}
