#include<bits/stdc++.h>

using namespace std;

int main()

{
        //freopen("input.txt", "r", stdin); // redirects standard input
        //freopen("output.txt", "w", stdout); // redirects standard output
    int i,j=0,k,l,p,q,n,m,t;


    while(cin>>n>>m)
    {
        if(!n && !m)
        {
            break;
        }

        if(min(m,n)==1)
        {
            //printf("Case %d: %d\n",++j,max(m,n));
            printf("%d knights may be placed on a %d row %d column board.\n",max(m,n),n,m);
            ///4 knights may be placed on a 2 row 3 column board.
        }
        else if(min(m,n)==2)
        {

            l=((m*n)/8)*4;

            if((m*n)%8==2)
            {
                l+=2;

            }
            else if((m*n)%8==4 || (m*n)%8==6)
            {
                l+=4;
            }

            //printf("Case %d: %d\n",++j,l);
            printf("%d knights may be placed on a %d row %d column board.\n",l,n,m);
        }
        else
        {
            l=((m*n)+1)/2;
            //printf("Case %d: %d\n",++j,l);
            printf("%d knights may be placed on a %d row %d column board.\n",l,n,m);
        }
    }
}
