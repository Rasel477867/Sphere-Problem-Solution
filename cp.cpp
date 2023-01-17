#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define pb push_back
#define ps push
#define pp pop
multiset<ll>s;
multiset<ll>:: iterator it;
multiset<ll>:: iterator it1;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t,n,a,c,b,i;
    cin>>t;
    while(t--)
    {
        cin>>n;

        s.clear();
        for(i=0; i<n; i++)
        {
            cin>>a;
            s.insert(a);
        }
        c=0;
        while(s.size()!=1)
        {
            it=s.begin();
            a=*it;
            it1=it;
            it++;
            b=*it;
            c+=a+b;
            s.insert(a+b);
            s.erase(it1);
            s.erase(it);

        }
        cout<<c<<endl;
    }


    return 0;
}


