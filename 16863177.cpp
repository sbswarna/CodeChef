#include<bits/stdc++.h>
using namespace std;
long long a[5],tst;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>a[0]>>a[1]>>a[2]>>a[3];
        sort(a,a+4);
        if(a[0]==a[1]&&a[2]==a[3])
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
