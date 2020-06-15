#include<bits/stdc++.h>

using namespace std;

int main()

{
    int a[100],b[100];
    int i,j,k,t,n,l,tem,x;

    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n;
        l=0;
        for(j=0; j<n; j++)
        {
            cin>>a[j];

        }
        for(x=0; x<n; x++)
        {
            for(k=x+1; k<n; k++)
            {
                if(a[x]>=a[k])
                {
                    /*tem=a[x];
                    a[x]=a[k];
                    a[k]=tem;*/
                    l++;
                }
            }

        }

        printf("Optimal train swapping takes %d swaps.\n",l);
    }
}
