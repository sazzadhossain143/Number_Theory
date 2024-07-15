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
            if(i%2!=0)s.insert(i);
            if((n/i)%2!=0)s.insert(n/i);
        }
    }
    cout<<"Total Odd divisor = "<<s.size()<<endl;
    for(auto a : s)cout<<a<<" ";
    cout<<endl;
}
