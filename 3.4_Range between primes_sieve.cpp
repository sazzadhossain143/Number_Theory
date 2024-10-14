#include<bits/stdc++.h>
using namespace std;
//https://www.codechef.com/problems/CNTPRIME
                            // n tomo prime number
bool prime[100000000];
long long int n=100000000;
vector<long long int>v;
void sieve()
{


    for(long long int i=4; i<=n; i+=2)prime[i]==1;
    for(long long int i=3; i*i<=n; i+=2)
    {
        if(prime[i]==0)
        {
            for(long long int j=i*i; j<=n; j+=(i*2))
            {
                prime[j]=1;
            }
        }
    }
    v.push_back(2);
    for(long long int i=3; i<=n; i+=2)
    {
        if(prime[i]==0) v.push_back(i);
    }
    //cout<<endl;

}
int main()
{
    sieve();

    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int a,b,l,r; cin>>l>>r;
        a = lower_bound(v.begin(),v.end(),l)-v.begin();
        b = upper_bound(v.begin(),v.end(),r)-v.begin();
//        cout<<a<<" "<<b<<"\n";
        cout<<b-a<<"\n";
    }
    //cout<<v[n-1]<<endl;
return 0;
}

