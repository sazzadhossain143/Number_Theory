#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    set<long long int>s;
    for(int i=1; i<=t; i++)
    {
        long long int p,l;
        cin>>p>>l;
        long long int x=p-l;

        for(long long int j=1; j*j<=x; j++)
        {
            if(x%j==0){if(j>l)s.insert(j);if(x/j > l)s.insert(x/j);else break;}
        }
        cout<<"Case "<<i<<": ";
        if(s.empty()){cout<<"impossible"<<endl;}

        else
        {
        for(auto a : s){if(a>l)cout<<a<<" ";}
        cout<<endl;}
        s.clear();
    }
return 0;
}
