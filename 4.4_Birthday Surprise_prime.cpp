#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool prime[100000003];
long long int n=100000000;
vector<long long int>v;
void sieve()
{
    prime[0]=1;
    prime[1]=1;
    for(long long int i=4; i<=n; i+=2)prime[i]=1;
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

}

int main()
{
    sieve();
    vector<ll int>v1;
    int sum1=0;
    int n;
    cin>>n;
    int a[n+3];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum1+=a[i];
        v1.push_back(sum1);
    }
    int q;
    cin>>q;
    int cnt=0;

    while(q--)
    {
        int l,r,sum=0;
        cin>>l>>r;
        if(l==1)
        {
            sum=v1[r-1];

            if(prime[sum]==0)cnt++;

        }
        else
        {
            sum=v1[r-1]-v1[l-2];
            if(prime[sum]==0)cnt++;

        }
    }

    if(cnt==1)cout<<"Sokina Khatun will be very happy!"<<endl;
    else if(cnt==2)cout<<"Sokina Khatun will be very very happy!"<<endl;
    else if(cnt>=3)cout<<"Sokina Khatun will be very very very happy!"<<endl;
    else cout<<"Adnan bhai, Priyom dada, Shuvo bhai will forever be single!"<<endl;

    return 0;
}

/*
while(q--)
    {
        ll int l,r,sum=0;
        cin>>l>>r;
        int c=0;
        if(l==1)
        {
            sum=v[r-1];
            if(sum==2)
            {
                cnt++;continue;

            }
            else
            {
                if(sum%2==0){c=1;continue;}
            }


        }
        else
        {
            sum=v[r-1]-v[l-2];
            if(sum%2==0)continue;
        }

        for(int i=3; i*i<=sum; i+=2)
        {
            if(sum%i==0)c=1;
            break;
        }
        if(c==0)cnt++;
    }
*/
/* if(cnt>=1)
    {
        cout<<"Sokina Khatun will be ";
        for(int i=1; i<=cnt; i++)cout<<"very ";
        cout<<"happy!"<<endl;
    }*/
