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
ordered_multiset s;
//ordered_multiset :: iterator it;
map<ll,ll>m;
map<ll,ll>:: iterator it;
vector<ll>v;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,k,a,b,i;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.pb(a);
    }
    cin>>k;
    ll r=0,l=0;
    for(i=0; i<n; i++)
    {
        a=v[i];
        r++;
        m[a]+=1;
        if(r-l==k)
        {
            it=m.end();
            it--;
            cout<<it->first<<" ";
            a=v[l];
            m[a]-=1;
            if(m[a]==0)
            {
                m.erase(a);
            }
            l++;
        }
    }


    return 0;

}

