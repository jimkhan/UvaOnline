#include<bits/stdc++.h>

using namespace std;

typedef long long ll;


int main()
{

    //freopen("output.txt", "w", stdout);
    ll n,m,c,r,x,i,y,ans;
    string a="01234",b="56789";

    while(cin>>a)
    {

        m=atoll(a.c_str());
        x=atoll(b.c_str());
        if(x>m)
        {
            swap(m,x);
        }
        ans=m-x;

        printf("%lld - %lld = %lld = 9 * %lld\n",m,x,ans,ans/9);
    }



    return 0;
}


