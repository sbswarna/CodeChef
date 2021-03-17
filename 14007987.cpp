#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long u,v,tst,ans;
    cin>>tst;
    while(tst--)
    {
        cin>>u>>v;
        if(v==0)
        {
            ans=((u+1)*(u+2))/2;
        }
        else if(u==0)
        {
            ans=((v*(v+1))/2)+1;
        }
        else
        {
            ans=((u+2)*(u+1))/2;
            //cout<<ans<<endl;
            ans=ans+abs(((u)*((u+1))/2)-(((u+v)*(u+v+1))/2));
        }
        cout<<ans<<endl;
    }
    return 0;
}
