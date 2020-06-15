#include<bits/stdc++.h>
#define pb push_back

typedef long long ll;

using namespace std;


int main()

{
    //freopen("output.txt", "w", stdout);
    string s,b;
    int i,j,k,l,m,n,val,p=1;

    while(cin>>n>>k && n!=0 && k!=0)
    {
        int a[n+9][k+9]= {0};
        m=n;
        l=2;
        while(m--)
        {
            cin>>s;

            for(i=0; i<k; i++)
            {
                if(s[i]=='*')
                {
                    a[l][i+2]=-10;
                }
            }
            l++;
        }

        for(i=2; i<=n+1; i++)
        {
            for(j=2; j<=k+1; j++)
            {
                if(a[i][j]<0)
                {

                    a[i][j+1]++;

                    a[i][j-1]++;

                    a[i+1][j]++;

                    a[i-1][j]++;///

                    a[i+1][j+1]++;

                    a[i+1][j-1]++;

                    a[i-1][j+1]++;

                    a[i-1][j-1]++;
                }
            }
        }
        if(p>1)
        {
            printf("\n");
        }
        printf("Field #%d:\n",p);

        for(i=2; i<=n+1; i++)
        {
            for(j=2; j<=k+1; j++)
            {
                if(a[i][j]<0)
                {
                    printf("*");
                    continue;
                }
                printf("%d",a[i][j]);
            }

            cout<<endl;
        }
        p++;


    }

}
