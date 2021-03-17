#include<bits/stdc++.h>
using namespace std;
long long i,j,tst,pal[1000003];
vector<long long>a[30];
string s;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>s;
        if(s.size()==1)
        {
            cout<<1<<endl;
        }
        else
        {
            for(i=0; i<s.size(); i++)
            {
                a[s[i]-'a'].push_back(i+1);
            }
            long long c=0,even=0,p,d=0;
            for(i=0; i<26; i++)
            {
                if(a[i].size()!=0)
                {
                    if((a[i].size())%2==1)
                    {
                        c++;
                        p=i;
                    }
                    else
                        even++;
                    d++;
                }
            }
            if(s.size()%2==1)
            {
                if(c==1&&(even==d-1))
                {
                    long long x=1;
                    for(i=0; i<26; i++)
                    {
                        if(i!=p&&a[i].size()!=0)
                        {
                            for(j=0; j<(a[i].size())/2; j++)
                            {
                                pal[x]=a[i][j];
                                pal[s.size()-x+1]=a[i][a[i].size()-1-j];
                                x++;
                            }
                        }
                    }
                    for(i=0;i<a[p].size();i++)
                    {
                        pal[x]=a[p][i];
                        x++;
                    }
                    for(i=1; i<=s.size(); i++)
                    {
                        if(i!=s.size())
                            cout<<pal[i]<<" ";
                        else
                            cout<<pal[i]<<endl;
                    }
                }
                else
                    cout<<-1<<endl;
            }
            else
            {
                if(c==0&&even==d)
                {
                    long long x=1;
                    for(i=0; i<26; i++)
                    {
                        if(a[i].size()!=0)
                        {
                            for(j=0; j<(a[i].size())/2; j++)
                            {
                                pal[x]=a[i][j];
                                pal[s.size()-x+1]=a[i][a[i].size()-1-j];
                                x++;
                            }
                        }
                    }
                    for(i=1; i<=s.size(); i++)
                    {
                        if(i!=s.size())
                            cout<<pal[i]<<" ";
                        else
                            cout<<pal[i]<<endl;
                    }
                }
                else
                    cout<<-1<<endl;
            }
        }
        for(i=0; i<=26; i++)
            a[i].clear();
    }
    return 0;
}
