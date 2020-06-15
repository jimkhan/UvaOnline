#include<bits/stdc++.h>

using namespace std;

int main()

{
    int i,j,k,l,n,m,b,t;

    while(cin>>n && n!=0)
    {
        vector<int> v;

        for(i=0;i<n;i++)
        {
            cin>>b;
            v.push_back(b);
        }
        sort(v.begin(),v.end(), greater<int>());
        m=0;
        t=n-1;
        while(t--)
        {
            l=v[n-1];
            v.pop_back();
            n--;
            k=v[n-1];
            v.pop_back();
            j=l+k;
            v.push_back(j);
            n++;
            m+=j;
            sort(v.begin(), v.end(), greater<int>());
        }
        printf("%d\n",m);
    }
}
