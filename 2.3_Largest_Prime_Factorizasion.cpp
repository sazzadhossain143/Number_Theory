#include<bits/stdc++.h>
using namespace std;

set<long long int>s;
vector<long long int>v;

void div(long long int n)
{
    long long int tmp=n;
    for(long long int i=2; i*i<=tmp; i++)
    {
        if(tmp%i==0)
        {
            while(tmp%i==0)
            {
                tmp/=i;
                s.insert(i);
            }
        }

    }
    if(tmp>1)s.insert(tmp);
}
int main()
{
    int t=450;
    //cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        if(n==0)break;
        n=abs(n);
        //cout<<n<<endl;
        div(n);
        v.assign(s.begin(),s.end());
        if(s.size()==1 || s.empty())cout<<-1<<endl;
        else if(v.size()!=0) cout<<v[v.size()-1]<<endl;
        s.clear();
        v.clear();
    }
    //for(auto a : s)cout<<a<<" ";
    //cout<<endl;
    return 0;
}
