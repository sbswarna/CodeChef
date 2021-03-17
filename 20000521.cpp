#include<bits/stdc++.h>
using namespace std;
long long tst,n,s,x,des,a,b;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n>>x>>s;
        cin>>a>>b;
        if(x==a)
        {
            des=b;
        }
        else if(x==b)
        {
            des=a;
        }
        else
        {
            des=x;
        }
        for(int i=2;i<=s;i++)
        {
            cin>>a>>b;
            if(a==des)
            {
                des=b;
            }
            else if(b==des)
            {
                des=a;
            }
        }
        cout<<des<<endl;
    }
    return 0;
}
