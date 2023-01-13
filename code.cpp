



#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define pb push_back
vector<ll>v;
ll n,k;
bool cheak(ll num)
{
    ll c=1,sum=0,i;
    for(i=1; i<n; i++)
    {
        sum+=v[i]-v[i-1];
        if(sum>=num)
        {
            sum=0;
            c++;
        }
    }
    if(c>=k)
        return true;
    else
        return false;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   ll i,t,a,mid,l,r,ans;
   cin>>t;
   while(t--)
   {
       v.clear();
       cin>>n>>k;
       for(i=0; i<n; i++)
       {
           cin>>a;
           v.pb(a);
       }
       sort(v.begin(),v.end());
       l=0;
       r=v[n-1];
       while(r>=l)
       {
           mid=(l+r)/2;
           if(cheak(mid))
           {
               ans=mid;
               l=mid+1;
           }
           else
            r=mid-1;
       }
       cout<<ans<<endl;
   }




    return 0;
}
