#include<bits/stdc++.h>

using namespace std;

int main()
{

    long long n;
    int k,a[1000],i,j;
    while(cin>>n && n!=0)
    {
        k=0;
        i=0;
        while(n!=0)
        {
            a[i]=n%2;
            if(n%2!=0)
            {
                k++;
            }
            n=n/2;
            i++;
        }
        printf("The parity of ");
        for(j=i-1;j>=0;j--)
        {
            printf("%d",a[j]);
        }
        printf(" is %d (mod 2).\n",k);

    }
    return 0;
}
