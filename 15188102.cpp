#include<bits/stdc++.h>
using namespace std;
long long tst,i,n;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        if(n%2==0)
        {
            for(i=1; i<=n; i++)
            {
                if(i%2==1)
                    cout<<i+1;
                else
                    cout<<i-1;
                if(i<n)
                    cout<<" ";
                else
                    cout<<endl;
            }
        }
        else
        {
            for(i=1; i<=n-3; i++)
            {
                if(i%2==1)
                    cout<<i+1;
                else
                    cout<<i-1;
                cout<<" ";
            }
            cout<<n-1<<" "<<n<<" "<<n-2<<endl;
        }
    }
    return 0;
}
