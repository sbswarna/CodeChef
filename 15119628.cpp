#include<bits/stdc++.h>
using namespace std;
long long i,a,tst,ch;
map<char,long long>mp;
string s;
int main()
{
    cin>>tst;
    while(tst--)
    {
        ch=0;
        long long sm=0,sm1=0;

        for(i=1; i<=26; i++)
        {
            cin>>a;
            mp[ch+'a']=a;
            ch++;
            sm=sm+a;
        }
        cin>>s;
        for(i=0; i<s.size(); i++)
        {
            if(mp[s[i]]!=-1)
            {
                sm1=sm1+mp[s[i]];
                mp[s[i]]=-1;
            }

        }
        cout<< abs(sm-sm1) <<endl;
    }
    return 0;
}
