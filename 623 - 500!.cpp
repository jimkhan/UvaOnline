#include<bits/stdc++.h>

using namespace std;

#define MAX 100000

int v[MAX];
int len;

void multi(int x)
{
    int i,r,carry=0,ans;
    for(i=0; i<len;i++)
    {
        ans=v[i]*x+carry;
        v[i]=ans%10;
        carry=ans/10;
    }
    while(carry)
    {
        v[len]=carry%10;
        carry=carry/10;
        len++;
    }
}

void factor(int n)
{
    v[0]=1;
    len=1;

    for(int i=2; i<=n; i++)
    {
        multi(i);
    }
}
int main()

{
    int i,j,k,l,n;

    while(cin>>n)
    {
        factor(n);

        printf("%d!\n",n);
        for(i=len-1;i>=0;i--)
        {
            printf("%d",v[i]);
        }
        cout<<endl;
    }

}

