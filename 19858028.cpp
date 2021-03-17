#include<bits/stdc++.h>
using namespace std;
int tst,n,m;
string s1,s2;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n>>m;
        int f=0,g=0,wa=0,WA=0;
        for(int i=1; i<=n; i++)
        {
            g=0;
            cin>>s1>>s2;
            if(s1=="correct")
            {
                for(int j=0; j<m; j++)
                {
                    if(s2[j]=='0')
                    {
                        f=1;
                    }
                }
            }
            if(s1=="wrong")
            {
                WA++;
                for(int j=0; j<m; j++)
                {
                    if(s2[j]=='0')
                    {
                        g++;
                    }
                }
                if(g>0)
                    wa++;
            }
        }
        if(f==1)
            cout<<"INVALID"<<endl;
        else
        {
            if(WA==wa)
            {
                cout<<"FINE"<<endl;
            }
            else
                cout<<"WEAK"<<endl;
        }
    }
    return 0;
}
