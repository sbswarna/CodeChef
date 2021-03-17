#include<bits/stdc++.h>
using namespace std;
long long a,c1,c2,i,n,p,tst;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n>>p;
        c1=0;
        c2=0;
        for(i=1;i<=n;i++)
        {
            cin>>a;
            if(a>=p/2)
            {
                c1++;
            }
            else if(a<=p/10)
            {
                c2++;
            }
        }
        if(c1==1&&c2==2)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }
    return 0;
}
