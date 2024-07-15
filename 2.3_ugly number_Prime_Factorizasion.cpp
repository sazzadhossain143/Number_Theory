#include<bits/stdc++.h>
using namespace std;
int main()
{
  set<long long int>s;
   s.insert(1);
   for(long long int i=1; i<1500; i++)
   {
       long long first=*s.begin();
       s.insert(first*2);
       s.insert(first*3);
       s.insert(first*5);
       s.erase(*s.begin());
   }

   cout<<"The 1500'th ugly number is "<<*s.begin()<<"."<<endl;

   cout<<"The 1500'th ugly number is "<<859963392<<"."<<endl;
  /* long long int n,tmp,cnt=0;
    n=2;//859963392//819200000;//640000000;//503316480;//387420489;//298598400;//226748160;//170859375;//128000000;//96000000;//51200000;//2488320;
    set<long long int>s;
    vector<long long int>v;
    v.push_back(1);
    while(1){
            tmp=n;
        for(long long int i=2; i<=5; i++)
        {
            while(tmp%i==0)
            {
                tmp/=i;
                s.insert(i);
            }
        }
        if(tmp>1)s.insert(tmp);

        vector<long long int>v1;
        v1.assign(s.begin(),s.end());
        int flag=0;
        for(int j=0; j<v1.size(); j++)
        {
            if(v1[j]==2 || v1[j]==3 || v1[j]==5 )flag=1;
            else {flag=0;break;}
        }
        if(flag==1)v.push_back(n);
        if(v.size()>50)break;//601 401 101 51 51 51 51 51 51 51 51 12
        s.clear();
        v1.clear();
    n++;
    }

    cout<<"Total ugly = "<<v.size()<<endl;//859963392
    for(auto a : v)cout<<a<<" ";*/


   /* cout<<"Total prime factor = "<<s.size()<<endl;
    for(auto a : s)cout<<a<<" ";
    cout<<endl;*/
}
