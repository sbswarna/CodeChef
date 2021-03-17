#include<bits/stdc++.h>
using namespace std;
int a,b,c,tst,n;
int main ()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        int c=0;
        for(int i=1;i<=n;i++)
        {
            cin>>a>>b;
            if(b-a>5)
                c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
