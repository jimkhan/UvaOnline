#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()

{
    //freopen("output.txt", "w", stdout);
    ll t,x,y,z,i,j,n;
    double k,l,a,b,c;

    while(cin>>t)
    {
        while(t--)
        {
            cin>>n;
            double sum=0;
            while(n--)
            {
                cin>>a>>b>>c;

                if(b==0)
                {
                    sum+=0;
                    continue;
                }
                k=(a/b)*c;
                k=k*b;
                sum+=k;

            }
            printf("%.0f\n",sum);



        }
    }

    return 0;
}

