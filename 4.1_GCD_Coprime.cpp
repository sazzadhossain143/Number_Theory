#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll int index[1002];
ll int mark[1002];

void coprime()
{
    ll n;
    cin >> n;
    map<ll,ll> mp;
    for(int i = 0 ; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x] = i+1;
    }
    ll ans = -1;
    for(auto i : mp)
    {
        for(auto j : mp)
        {
            if(__gcd(i.first,j.first) == 1)
            {
                ans = max(ans, (i.second+j.second));
            }
        }
    }

    cout << ans << endl;
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        coprime();
    }
}


void coprime2()
{
    ll int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        index[x]=i+1;
        mark[x]=1;
    }
    ll int ans=-1;
    for(int i=1; i<=1000; i++)
    {
        for(int j=1; j<=1000; j++)
        {
            if(mark[i]==1 && mark[j]==1)
            {
                if(__gcd(i,j)==1)
                {
                    ans=max(ans,index[i]+index[j]);
                }
            }
        }
    }
    cout<<ans<<"\n";
}








/*vector<long long int>v;
long long int n,x,g;

int main()
{
    int t;
    cin>>t;
    while(t--){
    cin>>n;
    for(long long int i=0; i<n; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    ll int mx=-1;
    for(ll int i=0; i<n; i++)
    {
        for(ll int j=0; j<n; j++){
        g=__gcd(v[i],v[j]);
        //cout<<g<<endl;
        if(g==1)
        {
            ll int m=i+j+2;
            if(m>mx)mx=m;
        }
        }
    }
    cout<<mx<<endl;
    v.clear();
    }
}
*/
