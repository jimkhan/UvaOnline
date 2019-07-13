#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,mx,m,n;

    while(cin>>n>>m)
    {
        mx = 0;

        printf("%d %d",n,m);

        if(n>m)
        {
           swap(n,m); /// This is built in swap function in c++ STL; if value of 'n' is greater than 'm' then it will be worked.
        }
        for(i=n; i<=m; i++)
        {
            c=1;    /// Here c represent the number of initial  cycle before "while"  operation.
            j=i;    /// Here 'j' holds each value from 'n' to 'm' and check in "while"

            while(j > 1)
            {
                if(j % 2 == 0) /// when value of j is even.
                {
                    j = j/2;
                }
                else    /// when value of j is odd.
                {
                    j = (3*j)+1;
                }

                c++; /// counting the cycle.
            }

            mx=max(mx,c); /// This is STL "maximum" count function between two values.

        }
        printf(" %d\n",mx);
    }
    return 0;
}



