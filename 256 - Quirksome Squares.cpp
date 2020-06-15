#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[10][10];
    int c[4] = {0};
    int div[4] = { 10,100,1000,10000 };
    int i,j,k,l,m,n,t,s;

    for (i = 0; i < 10000; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            if (i < div[j])
            {
                k = i*i / div[j] + i*i%div[j];

                if (k == i)
                {
                    a[j][c[j]] = i*i;
                    c[j]++;
                }
            }
        }
    }

    while (cin>>n)
    {
        l = n / 2 - 1;
        for (int i = 0; i < c[l]; i++)
        {
            printf("%0*d\n", n, a[l][i]);
        }

    }

    return 0;
}
