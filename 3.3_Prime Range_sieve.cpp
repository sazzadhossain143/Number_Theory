#include<bits/stdc++.h>
using namespace std;

                            //  Range x-y tomo prime number r sum
long long int n=200000000;
bool prime[200000003];
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
    long long int sum=2;

    v.push_back(sum);
    for(long long int i=3; i<=n; i+=2)
    {
        if(prime[i]==0){sum+=i; v.push_back(sum);}
    }

}
int main()
{
    sieve();
    //cout<<v.size()<<endl;
    int N;
    cin>>N;
    while(N--){
    long long int x,y,sum=0;
    cin>>x>>y;
    if(x==1)cout<<v[y-1]<<endl;
    else cout<<v[y-1]-v[x-2]<<endl;
    /*/for(long long int i=x; i<=y; i++)
    {
        sum+=v[i-1];
        //cout<<v[i-1]<<"\n";

    }
    cout<<sum<<endl;*/
    }
return 0;
}

