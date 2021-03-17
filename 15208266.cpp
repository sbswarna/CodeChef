#include<bits/stdc++.h>
using namespace std;
long long tst,i,j;
string s;
set<char>st;
map<long long,long long>mp;
int main()
{
    cin>>tst;
    getchar();
    while(tst--)
    {
        cin>>s;
        for(i=0; i<s.size(); i++)
        {
            if(mp.find(s[i]-48)==mp.end())
            {
                mp[s[i]-48]=1;
            }
            else
            {
                mp[s[i]-48]++;
            }
        }
        if(mp[6]>=2)
        {
            st.insert('B');
        }
        if(mp[7]>=2)
        {
            st.insert('M');
        }
        if(mp[8]>=2)
        {
            st.insert('X');
        }
        for(i=6; i<=9; i++)
        {
            if(mp[i]>=1)
            {
                for(j=0; j<=9; j++)
                {
                    if(i!=j)
                    {
                        if(mp[j]>=1)
                        {
                            long long p=(i*10)+j;
                            if(p>=65&&p<=90)
                                st.insert(char(p));
                        }
                    }
                }
            }
        }
        if(st.size()==0)
            cout<<endl;
        else
        {
            set<char> :: iterator it;
            for(it=st.begin(); it!=st.end(); it++)
                cout<<(*it);
            cout<<endl;
        }
        st.clear();
        mp.clear();
    }
    return 0;
}
