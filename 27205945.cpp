#include<bits/stdc++.h>
using namespace std;
int tst,n,a[1000];
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        int cnt=0;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            int f=0;
            for(int j=i-1;j>=i-5&&j>0;j--)
            {
                if(a[i]<a[j])
                {
                    f=0;
                }
                else
                {
                    f=1;
                    break;
                }
            }
            if(f==0)
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
