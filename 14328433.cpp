#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstdio>
using namespace std;
long long tst,a,b,n,d,c;
double d1;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>a>>b>>n;
        if(n<=30)
        {
            if(n%2==0)
            {
                a=a*pow(2,(n/2));
                b=b*pow(2,n/2);
            }
            else
            {
                a=a*pow(2,(n/2)+1);
                b=b*pow(2,n/2);
            }
            //cout<<a<<" "<<b<<endl;
            c=max(a,b);
            d=min(a,b);
            d1=floor((c*1.00)/(d*1.00));
            printf("%.0lf\n",d1);
        }
        else
        {
        c=max(a,b);
        d=min(a,b);
        //cout<<c<<" "<<d<<endl;
        if(n%2==0)
        {
           d1=(c*1.00)/(d*1.00);
        }
        else
        {
            if(c==a)
            {
                d1=floor((c*2.00)/(d*1.00));
            }
            else
            {
                d1=floor((c*1.00)/(d*2.00));
            }
        }
        //printf("%.0lf\n",c/d);
        printf("%.0lf\n",d1);
    }
    }
    return 0;
}
