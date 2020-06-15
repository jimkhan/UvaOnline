#include<bits/stdc++.h>

using namespace std;

int main()

{
    string a;
    int i,j,k,l,t,m,n,sum;

    cin>>t;

    while(t--)
    {
        cin>>a;
        l=a.length();
        j=0;
        sum=0;
        for(i=0;i<l;i++)
        {
            if(a[i]==79)
            {
                j++;
                sum=sum+j;
            }
            else
            {
                j=0;
            }
        }

        printf("%d\n",sum);
    }
}
