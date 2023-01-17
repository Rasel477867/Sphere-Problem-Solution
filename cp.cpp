#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define pb push_back
#define ps push
#define pp pop
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
#include <iostream>
using namespace __gnu_pbds;
using namespace std;

typedef tree<long long int, null_type, less_equal<long long int>, rb_tree_tag,
             tree_order_statistics_node_update>
    ordered_multiset;

map<ll,string>m;
map<ll,string>:: iterator it;
map<ll,string>:: iterator it1;
map<string,ll>m1;
map<string,ll>:: iterator it2;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll i,t,n,a,b;
    string s;
    cin>>t;
    i=0;
    while(t--)
    {
        i++;
        cin>>n>>s;
        if(s!="BUY")
        {
            cin>>b;
            if(n==1)
            {
                m[b]=s;
                m1[s]=b;
            }
            else{
                a=m1[s];

                m.erase(a);
                m1[s]=b;
                m[b]=s;


            }
        }
        else{
            it=m.begin();
            cout<<it->second<<" "<<i<<endl;
            m1.erase(it->second);
            m.erase(it);

        }


    }

    return 0;

}
