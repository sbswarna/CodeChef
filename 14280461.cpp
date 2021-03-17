#include<bits/stdc++.h>
using namespace std;
long long tst,n,i,j;

int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        long long x=1;
        for(i=1; i<=n; i++)
        {
            if(i==1)
            {
                cout<<n<<endl;
            }
            cout<<n<<endl;
            for(j=1; j<=n; j++)
            {
                if(x!=n)
                    cout<<j<<" "<<x<<" "<<x+1<<endl;
                else
                    cout<<j<<" "<<x<<" "<<1<<endl;
            }
            x++;
        }
    }
    return 0;
}
