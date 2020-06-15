#include<bits/stdc++.h>

using namespace std;


int main()

{
     double r,s,n,m,ans;

    while(cin>>r>>n)
    {


        ans = (sin ((360/n)*3.141592653589793238462643383279502884197169399375105820974944592307816406286 /180)*n*r*r)/2;

        printf("%.3lf\n",ans);
    }

    return 0;
}
