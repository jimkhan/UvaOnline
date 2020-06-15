#include<bits/stdc++.h>

using namespace std;


#define ll long long

ll big(ll n,ll p,ll m)
{
    if(p==0)
    {
        return 1;
    }
    else if(p%2==0)
    {
        ll h;

        h=big(n,p/2,m);
        return (h*h)%m;
    }

    else
    {
        return ((n%m)*big(n,p-1,m))%m;
    }
}

int main()
{
    ll n,p,m,i=0;

    while(cin>>n>>p>>m)
    {
        i++;
        cout<<big(n,p,m)<<endl;

    }

    return 0;
}
