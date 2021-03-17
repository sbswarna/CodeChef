#include<bits/stdc++.h>
using namespace std;
long long tst,n,m,x,y,k,p;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n>>m>>x>>y;
        n=n-2;
        m=m-2;
        if(n>=0&&m>=0)
        {
            if(n%x==0&&m%y==0)
                cout<<"Chefirnemo"<<endl;
            else
            {
                n+=1;
                m+=1;
                if((n%x==1&&m%y==1)||(n%x==0&&m%y==0))
                    cout<<"Chefirnemo"<<endl;
                else
                    cout<<"Pofik"<<endl;
            }
        }
        else
        {
            n+=1;
            m+=1;
            if((n%x==1&&m%y==1)||(n%x==0&&m%y==0))
                cout<<"Chefirnemo"<<endl;
            else
                cout<<"Pofik"<<endl;
        }
    }
    return 0;
}
