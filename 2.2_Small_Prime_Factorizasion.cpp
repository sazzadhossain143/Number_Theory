#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    cin>>n;
    int SPF=0;

    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            SPF=i;
            break;

        }
    }
    cout<<"Small prime factor = "<<SPF<<endl;

}
