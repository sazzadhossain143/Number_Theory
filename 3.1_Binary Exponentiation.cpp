#include<bits/stdc++.h>
using namespace std;

    /*n=2^12
    res=1 base=2 power=12
    if(pow%2==1) res*=base; pow-=1;
    else {base*=base; pow/=2;}*/

long long int power(long long int base, long long int n,long long int mod) //time O(logn)
{
    long long result=1;
    while(n)
    {
        if(n%2==1){result=(result*base)%mod; n--;}
        else {base=(base*base)%mod; n/=2;}
    }
    return result;
}

int main()
{
    long long int n,t,b;
    cin>>t;
    while(t--)
    {
        cin>>b>>n;
        cout<<power(b,n,1e9)<<endl;
    }
}
