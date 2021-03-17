#include<bits/stdc++.h>
using namespace std;
string s;
long long tst;
int main()
{
    cin>>tst;
    getchar();
    while(tst--)
    {
        cin>>s;
        long long p=0;
        long long c=0,d=0,i,j;
        s.push_back('A');
        for(j=0;j<s.size();j=i+1)
        {
            c=0;
            for(i=j;i<s.size();i++)
            {
                if(s[i]=='D')
                {
                    c++;
                }
                else
                {
                    break;
                }
            }
            if(c>0)
            {
                d++;
            }

        }
        long long f=0,e=0;
        for(j=0;j<s.size();j=i+1)
        {
            e=0;
            for(i=j;i<s.size();i++)
            {
                if(s[i]=='U')
                {
                    e++;
                }
                else
                {
                    break;
                }
            }

            if(e>0)
            {
                f++;
            }

        }
        if(d>f)
        {
            cout<<f<<endl;
        }
        else
        {
            cout<<d<<endl;
        }
    }
    return 0;
}
