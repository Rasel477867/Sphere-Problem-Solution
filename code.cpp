#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define pb push_back
#define ps push
#define pp pop
map<ll,vector<ll> >m1;
map<ll,ll>m;



vector<ll>v;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t,i,n,ans,j,a,b,c,p=1,sum;

    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        v.clear();
        ans=0;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
        }
        sort(v.begin(),v.end());
        for(i=0; i<n-2; i++)
        {
            for(j=i+1; j<n-1; j++)
            {
                a=v[i];
                b=v[j];
                sum=a+b;
                c=upper_bound(v.begin()+j+1,v.end(),sum)-v.begin();
                ans+=n-c;
            }
        }
       cout<<ans<<endl;


    }
return 0;
}
