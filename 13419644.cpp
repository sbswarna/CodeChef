#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,i,p,f,f1,h[107],r[107];
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        f=0;
        for(i=0; i<n; i++)
        {
            scanf("%lld",&h[i]);
            if(i==0)
            {
                p=h[i];
            }
            else
            {
                if(p!=h[i])
                {
                    f=1;
                }
            }
        }
        f1=0;
        for(i=0; i<n; i++)
        {
            scanf("%lld",&r[i]);
            if(r[i]<15)
            {
                f1=1;
            }
        }
        if(f==0&&f1==0)
        {
            printf("Party\n");
        }
        else        printf("No Party\n");
    }
        return 0;

    }
