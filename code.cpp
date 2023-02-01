#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
#include <iostream>
#include<bits/stdc++.h>
#define endl '\n'
#define ll  long long int
#define pb push_back
using namespace __gnu_pbds;
using namespace std;

typedef tree<long long int, null_type, less_equal<long long int>, rb_tree_tag,
        tree_order_statistics_node_update>
        ordered_multiset;
ordered_multiset s;
//ordered_multiset :: iterator it;
vector<ll>v;
ll bit(ll num)
{
    ll c=0;
    while(num!=0)
    {
        num/=2;
        c++;
    }
    return c;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,t,a,b,x,ans=0;

    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=0;
        while(n>0)
        {
            x=bit(n)-1;
            ans+=(1<<(x-1))*x+n-(1<<x)+1;
            n=n-(1<<x);
        }
        cout<<ans<<endl;
    }
  return 0;
}
