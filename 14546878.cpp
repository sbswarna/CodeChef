#include<bits/stdc++.h>
using namespace std;
long long tst,i,n,b;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n>>b;
        if(b>=n)
        {
            cout<<0<<endl;
        }
        else
        {
            long long mx=-1;
            long long p=n-b;
            if(p<=b)
                cout<<p<<endl;
            else
            {
                long long h=n/2;
                long long j=n-h;
                long long o,g;
                if(j%b>0)
                {
                    g=h+(j%b);
                    o=(g-b);
                   // cout<<o<<endl;
                    //cout<<n-o<<endl;
                    long long k=(n-g)/b;
                    //cout<<k<<endl;
                   // cout<<k*g<<endl;
                    cout<<max(o*((n-o)/b),(k*g))<<endl;
                }
                else
                {
                    cout<<h*(j/b)<<endl;
                }

            }
        }
    }
    return 0;
}
