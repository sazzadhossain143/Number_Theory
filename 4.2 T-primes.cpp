#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;

    cin>>t;
    while(t--){
    long long int n,f=0;cin>>n;
    long long int r=sqrt(n);
    long long int c=r*r;
    if(r>2 && r%2==0)f=1;
    if(r==2 || r==3 || r==5 || r==7 || r==11 || r==13 || r==17)f=0;
    else{
    for(int i=3; i*i<=r; i+=2)
    {
        if(r%i==0){f=1;break;}
    }}
    if(f==0 && c==n && c>1){cout<<"YES"<<"\n";}
    else cout<<"NO"<<"\n";}
}


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
    //prime[2]==false;
    v.push_back(2);
    for(long long int i=3; i<=n; i+=2)
    {
        if(prime[i]==0) v.push_back(i);
    }
    //cout<<endl;

}




void sovle1()
{
    sieve();
    int t;cin>>t;
    while(t--){
    long long int n,c=0;cin>>n;
    for(long long int i=1; i*i<=n; i++)
    {
        //cout<<v[i-1]*v[i-1]<<endl;
        if(v[i-1]*v[i-1]==n){cout<<"YES\n";c=1;}
        else if(v[i-1]*v[i-1]>n)break ;
    }
    if(c==0)cout<<"NO\n";
    }
}

void solve2()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        long long int x,y;
        cin>>x;
        //int c=0;
        set<long long int>s;
        for(long long int j=2; j*j<=x; j++)
        {
            if(x%j==0){
            s.insert(j);
            long long int y=x/j;
            s.insert(y);
            if(s.size()==2)break;}

        }
        //for(auto a:s)cout<<a<<" ";
        if(s.size()==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        s.clear();
    }
}
