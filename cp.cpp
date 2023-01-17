#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define pb push_back
#define ps push
#define pp pop
map<string,ll >m;
map<string,ll >:: iterator it;
vector<ll>v;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,i,k,a,key,sum;
    string s;
    cin>>n>>k;
    for(i=0; i<n; i++)
    {
        cin>>s>>key;
        m[s]+=key;
    }
    for(it=m.begin(); it!=m.end(); it++)
        v.pb(it->second);
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    sum=0;
    for(i=0; i<v.size(); i++)
    {
        if(i==k)
            break;
        sum+=v[i];
    }
cout<<sum;

    return 0;
}


