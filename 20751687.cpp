#include<bits/stdc++.h>
using namespace std;
long long n,tst;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        long long k=0,k1=0,k2=0;
        long long bit=0,nibble=0,byte=0;
        for(int i=0; i<n; i++)
        {
            if(i%26==0)
            {
                bit=pow(2,k);
                if(byte>0)
                {
                    byte=byte-(pow(2,k-1));
                }
                k++;
            }
            else if(i%26==2)
            {
                nibble=pow(2,k1);
                bit=bit-(pow(2,k1));
                k1++;
            }
            else if(i%26==10)
            {
                byte=pow(2,k2);
                nibble=nibble-(pow(2,k2));
                k2++;
            }
        }
        cout<<bit<<" "<<nibble<<" "<<byte<<endl;
    }
    return 0;
}

