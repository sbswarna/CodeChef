#include<bits/stdc++.h>
using namespace std;
int tst,a,b,c;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>a>>b>>c;
        if(a-b-c==0||a-b+c==0||a+b-c==0)
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
