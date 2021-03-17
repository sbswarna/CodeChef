#include<bits/stdc++.h>
using namespace std;
int tst,a,n;
priority_queue<int>pq;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        pq=priority_queue<int>();
        for(int i=1; i<=n; i++)
        {
            cin>>a;
            pq.push(a*-1);
        }
        int mn=9999999999999;
        int x=pq.top()*-1;
        pq.pop();
        while(!pq.empty())
        {
            //cout<<"x="<<x<<endl;
            int y=pq.top()*-1;
            //cout<<"y="<<y<<endl;
            pq.pop();
            mn=min(mn,y-x);
            x=y;
        }
        cout<<mn<<endl;
    }
    return 0;
}
