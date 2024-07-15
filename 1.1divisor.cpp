#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    cin>>n;
    for(int i=1; i*i<=n; i++)
    {
        if(n%i==0)cnt+=2;
    }
    cout<<cnt<<endl;
}
