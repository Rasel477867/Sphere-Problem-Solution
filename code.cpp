



#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define pb push_back
ll n,m;
vector<ll>v;
bool cheak(ll num)
{
    ll sum=0,i;
    for(i=0; i<n; i++)
    {
        if(v[i]>num)
            sum+=v[i]-num;
    }
    if(sum>=m)
       return true;
    else
        return false;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll i,ans,mid,b,a,r,l;
    cin>>n>>m;
    b=0;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.pb(a);
        if(a>b)
            b=a;
    }
    l=0;
    r=b;
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
    cout<<ans;

    return 0;
}
