#include<bits/stdc++.h>
using namespace std;
long long i,j,n,tst,a;
int main()
{
    cin>>tst;
    while(tst--)
    {
        priority_queue<long long>pq[702];
        cin>>n;
        long long mn=9999999999999999;
        for(i=0; i<n; i++)
        {
            for(j=1;j<=n;j++)
            {
                cin>>a;
                pq[i].push(a);
            }
        }
        long long c=0,sum=0;
        for(i=n-1;i>=0;i--)
        {
            while(!pq[i].empty())
            {
                long long q=pq[i].top();
                //cout<<q<<endl;
                if(q<mn)
                {
                    //cout<<1<<endl;
                    c++;
                    mn=q;
                    sum=sum+mn;
                    break;
                }
                else
                {
                    pq[i].pop();
                }
            }
        }
        if(c==n)
            cout<<sum<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}
