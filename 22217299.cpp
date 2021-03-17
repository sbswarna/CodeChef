#include<bits/stdc++.h>
#include<cstdio>
#include<cstring>
using namespace std;
int tst;
char s[110];
int main()
{
    cin>>tst;
    getchar();
    while(tst--)
    {
        cin.getline(s,110);
        int f=0;
        string t;
        for(int i=0;i<strlen(s);i++)
        {
            if(s[i]==' ')
            {
                if(t=="not")
                {
                    f=1;
                    break;
                }
                t.clear();
            }
            else
            {
                t.push_back(s[i]);
            }
            if(i==strlen(s)-1)
            {
                if(t=="not")
                {
                    f=1;
                    break;
                }
                t.clear();
            }
        }
        if(f==0)
            cout<<"regularly fancy"<<endl;
        else
            cout<<"Real Fancy"<<endl;
    }
    return 0;
}
