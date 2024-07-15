#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j,tmp,cnt=0;
    cin>>n;
    tmp=n;
    set<int>s;

    for( i=2; i*i<=n; i++)
    {
        while(tmp%i==0)
        {
            tmp/=i;
            s.insert(i);
        }
    }
    if(tmp>1)s.insert(tmp);

    cout<<"Total prime factor = "<<s.size()<<endl;
    for(auto a : s)cout<<a<<" ";
    cout<<endl;
}
