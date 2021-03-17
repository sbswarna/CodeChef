#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long tst,i,n;
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        long long p=500;
        for(i=1;i<=n;i++)
        {
            cout<<p--;
            if(i!=n)
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
