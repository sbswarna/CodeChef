#include<bits/stdc++.h>
using namespace std;
long long tst,i,l,c,j;
string s;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>s;
        l=s.size();
        long long c=0,c1=0,p=-1,q=-1;
        for(i=0;i<l;i=j+1)
        {
            if(s[i]=='<')
            {
                c=0;
                for(j=i;j<l;j++)
                {
                    if(s[j]=='>')
                        break;
                    else if(s[j]=='<')
                        c++;
                }
            }
            else
                j=i;
            p=max(c,p);
        }
        for(i=0;i<l;i=j+1)
        {
            if(s[i]=='>')
            {
                c1=0;
                for(j=i;j<l;j++)
                {
                    if(s[j]=='<')
                        break;
                    else if(s[j]=='>')
                        c1++;
                }
            }
            else
                j=i;
            q=max(c1,q);
        }
        if(p==0&&q==0)
            cout<<1<<endl;
        else
       cout<<max(p,q)+1<<endl;
    }
    return 0;
}
