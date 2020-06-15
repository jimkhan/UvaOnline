#include<bits/stdc++.h>

using namespace std;

int main()

{
    int i,j,k,l,m,n,t,p,q,r,s=0;


    while(cin>>n && n)
    {

        int a[n+1];

        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        if(s>0)
        {
            printf("\n");
        }
        //sort(a,a+n);
        for(i=0;i<n-5;i++)
        {
            for(j=1;j<n-4;j++)
            {
                for(k=2;k<n-3;k++)
                {
                    for(l=3;l<n-2;l++)
                    {
                        for(p=4;p<n-1;p++)
                        {
                            for(q=5;q<n;q++)
                            {
                                if( (a[i]<a[j] && a[j]<a[k]) && (a[k]<a[l] && a[l]<a[p]) && (a[p]<a[q]))
                                printf("%d %d %d %d %d %d\n",a[i],a[j],a[k],a[l],a[p],a[q]);
                            }
                        }
                    }
                }
            }
        }
        s++;



    }



}

