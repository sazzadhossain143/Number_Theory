#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    cin>>n;
    set<int>s;
    for(int i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            s.insert(i);
            s.insert(n/i);
        }
    }
    cout<<"Total divisor = "<<s.size()<<endl;
    for(auto a : s)cout<<a<<" ";
    cout<<endl;
}
