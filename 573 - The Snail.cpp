#include<bits/stdc++.h>

using namespace std;

int main()

{
    double h,u,d,f,k,m,n,w,q;
    int i,j,l;

    while(cin>>h>>u>>d>>f && h!=0&& u!=0 && d!=0 && f!=0)
    {

        w=(f/100)*u;
        k=0;
        l=0;
        while(1)
        {
            l++;
            if(u>0)
            {
               k=k+u;
            }

            u=u-w;

            if(k>h)
            {
                printf("success on day %d\n",l);
                break;
            }
            k=k-d;
            if(k<0)
            {
                printf("failure on day %d\n",l);
                break;
            }

        }
    }

    return 0;
}
