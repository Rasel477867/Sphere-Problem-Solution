#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
#include <iostream>
#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define pb push_back


using namespace __gnu_pbds;
using namespace std;

typedef tree<long long int, null_type, less_equal<long long int>, rb_tree_tag,
        tree_order_statistics_node_update>
        ordered_multiset;
ordered_multiset s3;
//ordered_multiset :: iterator it;
const ll mod=1e9+7;
const ll z=1e6+5;
ll fact[z];
const ll N=1e7;
 bool sive[N];
 vector<ll>prime;
 vector<ll>v2;
 vector<ll>v;
 set<ll>s1;
 set<ll>s2;
 map<ll,ll >m;
 map<ll,ll >:: iterator it;
 ll digit(ll a)
 {
     ll sum1=0;
     while(a!=0)
     {
         sum1+=a%10;
         a=a/10;
     }
     return sum1;
 }
 long long int gcd(long long int a,long long int b)
{
    long long int c;
    while(a%b!=0)
    {
        c=b;
        b=a%b;
        a=c;
    }
    return b;
}



 ll ex(ll a,ll b,ll mod)
{
    if(b==0)
        return 1;
    else if(b%2==0)
        return (ex((a*a)%mod,b/2,mod));
    else
        return (a*ex((a*a)%mod,(b-1)/2,mod))%mod;
}
 void segsive(ll l,ll r)
 {    ll base,i,j;
     bool sprime[r-l+1];
     for(i=0; i<r-l+1; i++)
          sprime[i]=true;
     for(i=0; prime[i]*prime[i]<=r; i++)
     {
         ll cp=prime[i];
         base=(l/cp)*cp;
         if(base<l)
            base+=cp;
         for(j=base; j<=r; j+=cp)
              sprime[j-l]=false;
         if(cp==base)
            sprime[base-l]=true;
     }
     for(i=0; i<(r-l+1); i++)
       {
           if(sprime[i]==true)
            {
                if(i+l==1)
                    continue;
                cout<<i+l<<endl;
            }
       }
       cout<<endl;
 }
  ll euler_pi_function(ll n)
 { ll num,num1,num2,i;
      num=n;
     num1=n;
    for(i=0; prime[i]*prime[i]<=num ; i++)
    {
        while(1)
        {
            if(n%prime[i]!=0)
                break;
            else{
                n/=prime[i];
                m[prime[i]]++;
            }
        }
    }
    if(n>1)
        m[n]++;


       num=1;
      num2=1;
     for(it=m.begin(); it!=m.end(); it++)
     {
         num=num*(it->first);
         num2=num2*((it->first)-1);
     }
     num=num1/num;
     num=num*num2;
   return num;
 }

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll i,j;
    for(i=0; i<N; i++)
    {
        sive[i]=true;
    }
    sive[0]=false;
    sive[1]=false;
    for(i=2; i*i<=N; i++)
    {
        if(sive[i])
        {
            for(j=i*i; j<N; j+=i)
            {
                sive[j]=false;
            }
        }
    }
    for(i=0; i<N; i++)
    {
       if(sive[i]==true)
           prime.pb(i);
    }

    /*start main funciton*/

    ll n,a,b,c,t,num;
    cin>>t;
    while(t--)
    {
        cin>>n;
        num=n;
        v.clear();
        for(i=0; prime[i]*prime[i]<=n; i++)
        {
            while(1)
            {
                if(num%prime[i]==0)
                {
                    v.pb(prime[i]);
                    num=num/prime[i];
                }
                else
                    break;
            }
        }
        if(num>1)
            v.pb(num);
        for(i=0; i<v.size()-1; i++)
            cout<<v[i]<<" ";
        cout<<v[i]<<endl;
    }





return 0;
}
