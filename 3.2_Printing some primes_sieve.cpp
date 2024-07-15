#include<bits/stdc++.h>
using namespace std;
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
    //prime[2]==false;
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

    //int N;
    //cin>>N;
    for(long long int i=1; i<=v.size(); i+=100)
    {
        cout<<v[i-1]<<"\n";

    }
    //cout<<v[n-1]<<endl;
return 0;
}

