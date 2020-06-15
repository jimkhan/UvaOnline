#include<bits/stdc++.h>

using namespace std;

int main()

{
    long long int n,s;

    while(cin>>n && n!=0)
    {
        if(n<=100)
        {
            s=91;
        }
        else
        {
            s=n-10;
        }
        printf("f91(%lld) = %lld\n",n,s);
    }
}
