#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll int gcd(ll int a, ll int b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}
ll int lcm(ll int a, ll int b)
{
    return a*b/gcd(a,b);
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        ll int a,b;
        cin>>a>>b;
        ll int ans=gcd(a,b);
        //cout<<"GCD = "<<ans<<endl;
        ll int ans1=a*(b/ans);
        //cout<<"LCM = "<<ans1<<endl;

        ll int sum1=a+b;
        ll int sum2=ans+ans1;
        if(sum1==sum2)cout<<"true"<<"\n";
        else cout<<"false"<<"\n";
    }
    return 0;
}
