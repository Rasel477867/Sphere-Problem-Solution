#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define pb push_back
#define ps push
#define pp pop
vector<ll>v;

map<ll,ll>m;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,i,a,k,ans=0;
    cin>>n>>k;
    for(i=0; i<n; i++)
    {
        cin>>a;
        m[a]+=1;
        v.pb(a);
    }
    for(i=0; i<v.size(); i++)
    {
        a=v[i]-k;
        if(m[a]==1)
        {
            ans++;

        }

    }
    cout<<ans;



    return 0;
}
