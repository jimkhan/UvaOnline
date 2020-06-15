#include<bits/stdc++.h>

using namespace std;

int main()

{
    int i,j,k,l,t,n,m;
    char c;

    cin>>t;

    while(t--)
    {
         //freopen("input.txt", "r", stdin); // redirects standard input
        //freopen("output.txt", "w", stdout); // redirects standard output
        cin>>c>>n>>m;
        int ans;

        if(c == 'r' || c == 'Q')
        {
            ans=min(n,m);
        }
        else if(c == 'k')
        {
            ans=((m*n)+1)/2;
        }
        else{
            ans=((m+1)/2)*((n+1)/2);
        }
        printf("%d\n",ans);
    }


}
