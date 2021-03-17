#include<bits/stdc++.h>
using namespace std;
long long a[30],i,tst,c;
string s;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>s;
        if(s.size()<4)
            cout<<"normal"<<endl;
        else
        {
            c=0;
            for(i=0; i<s.size()-3; i++)
            {
                memset(a,0,sizeof(a));
                if(s[i]=='c'||s[i]=='h'||s[i]=='e'||s[i]=='f')
                {
                    a[s[i]-'a']++;
                    a[s[i+1]-'a']++;
                    a[s[i+2]-'a']++;
                    a[s[i+3]-'a']++;
                    if(a[2]==1&&a[7]==1&&a[4]==1&&a[5]==1)
                    {
                        c++;
                    }
                }
            }
            if(c>0)
            {
                cout<<"lovely "<<c<<endl;
            }
            else
                cout<<"normal"<<endl;
        }
    }
    return 0;
}
