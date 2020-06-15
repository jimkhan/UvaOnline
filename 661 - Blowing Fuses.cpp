#include<bits/stdc++.h>

using namespace std;

int main()

{
    int i,j=0,k,l,m,n,t;

    //freopen("input.txt", "r", stdin); // redirects standard input
    //freopen("output.txt", "w", stdout); // redirects standard output

    while(cin>>n>>m>>k)
    {
        if(!n && !m && !k)
        {
            break;
        }
        int a[n+10]= {0};

        for(i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        int ans=0,fl=0,mx=0;
        for(i=1; i<=m; i++)
        {
            cin>>l;
            ans+=a[l];
            a[l]*=-1;
            mx=max(mx,ans);
            if(ans>k)
            {
                fl=1;
            }
        }

        if(fl)
        {
            printf("Sequence %d\n",++j);
            printf("Fuse was blown.\n");

        }
        if(!fl)
        {
            printf("Sequence %d\n",++j);
            printf("Fuse was not blown.\n");
            printf("Maximal power consumption was %d amperes.\n",mx);
        }
        printf("\n");
    }
}
