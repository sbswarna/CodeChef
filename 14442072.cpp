#include<bits/stdc++.h>
using namespace std;
long long i,c,tst,l,j;
char s[150];
string s1[15];
int main()
{
    cin>>tst;
    getchar();
    while(tst--)
    {
        cin.getline(s,150);
        l=strlen(s);
        c=0;
        for(i=0; i<l; i=j+1)
        {
            for(j=i; j<l; j++)
            {
                if(s[j]==' ')
                {
                    break;
                }
                else
                {
                    s1[c].push_back(s[j]);
                }
            }
            c++;
        }
        if(c==1)
        {
            if(s1[0][0]>='a'&&s1[0][0]<='z')
            {
                s1[0][0]=s1[0][0]-'a'+'A';
            }
            cout<<s1[0][0];
            for(i=1; i<s1[0].size(); i++)
            {
                if(s1[0][i]>='A'&&s1[0][i]<='Z')
                {
                    s1[0][i]=s1[0][i]-'A'+'a';
                    cout<<s1[0][i];
                }
                else
                    cout<<s1[0][i];
            }
            cout<<endl;
        }
        else if(c==2)
        {
            if(s1[0][0]>='a'&&s1[0][0]<='z')
            {
                s1[0][0]=s1[0][0]-'a'+'A';
            }
            cout<<s1[0][0]<<". ";
            if(s1[1][0]>='a'&&s1[1][0]<='z')
            {
                s1[1][0]=s1[1][0]-'a'+'A';
            }
            cout<<s1[1][0];
            for(i=1; i<s1[1].size(); i++)
            {
                if(s1[1][i]>='A'&&s1[1][i]<='Z')
                {
                    s1[1][i]=s1[1][i]-'A'+'a';
                    cout<<s1[1][i];
                }
                else
                    cout<<s1[1][i];
            }
            cout<<endl;
        }
        else if(c==3)
        {
            //cout<<s1[0]<<endl<<s1[1]<<endl<<s1[2]<<endl;
              if(s1[0][0]>='a'&&s1[0][0]<='z')
            {
                s1[0][0]=s1[0][0]-'a'+'A';
            }
            cout<<s1[0][0]<<". ";
            if(s1[1][0]>='a'&&s1[1][0]<='z')
            {
                s1[1][0]=s1[1][0]-'a'+'A';
            }
            cout<<s1[1][0]<<". ";
            if(s1[2][0]>='a'&&s1[2][0]<='z')
            {
                s1[2][0]=s1[2][0]-'a'+'A';
            }
            cout<<s1[2][0];
            for(i=1; i<s1[2].size(); i++)
            {
                if(s1[2][i]>='A'&&s1[2][i]<='Z')
                {
                    s1[2][i]=s1[2][i]-'A'+'a';
                    cout<<s1[2][i];
                }
                else
                    cout<<s1[2][i];
            }
            cout<<endl;
        }
        s1[0].clear();
        s1[1].clear();
        s1[2].clear();
    }
    return 0;
}
