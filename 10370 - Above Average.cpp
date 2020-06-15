#include<bits/stdc++.h>

using namespace std;

int main()

{
    int a[1000];
    int i,j,t;
    double x,y,s,d,n,m,l;

    cin>>t;
    while(t--)
    {
        cin>>n;
        m=0;
        l=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            m=m+a[i];
        }
        m=m/n;
        for(i=0;i<n;i++)
        {
            if(a[i]>m)
            {
                l++;
            }
        }
        m=(l/n)*100;
        printf("%.3f%%\n",m);

    }

    return 0;
}
