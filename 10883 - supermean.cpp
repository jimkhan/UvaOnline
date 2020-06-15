#include<bits/stdc++.h>

using namespace std;

int main()

{
    float a[50000],b[50000],n,N,cou,l,ans;
    int i,j,t,k,l,m;

    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>N;
        l=0;cou=0;
        for(j=0;j<N;j++)
        {
            cin>>a[j];

        }
        while(f==0)
        {
            for(j=0,k=j+1;j<N,k<N;j++,k++)
            {
                a[j]=(a[j]+a[k])/2;
            }

        }
        ans=cou/N;
        printf("Case #%d: %.3f\n",i,ans);
    }
    return 0;
}
