#include<bits/stdc++.h>

using namespace std;

int main()

{

    int i,j,k,l,m,n,t;

    vector<long long> v;

    while(cin>>n)
    {
        v.push_back(n);
        k=v.size();
        sort(v.begin(),v.end());

        if(k%2==0)
        {

            l=k/2;
            l=(v[l]+v[l-1])/2;
            printf("%lld\n",l);
        }
        else
        {
            printf("%lld\n",v[k/2]);
        }
    }
}
