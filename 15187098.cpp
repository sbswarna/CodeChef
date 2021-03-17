#include<bits/stdc++.h>
using namespace std;
long long sum[100004],a[100004],i,n,tst;
int main()
{
    cin>>tst;
    while(tst--)
    {
        memset(sum,0,sizeof(sum));
        cin>>n;
        cin>>a[1];
        sum[1]=a[1];
        for(i=2; i<=n; i++)
        {
            cin>>a[i];
            sum[i]=sum[i-1]+a[i];
        }
        long long mn=999999999999999999,indx;
        for(i=n;i>=1;i--)
        {
            long long x=sum[i]+sum[n]-sum[i]+a[i];
            if(x<=mn)
           {
               mn=x;
               indx=i;
           }
        }
        cout<<indx<<endl;
    }
    return 0;
}
