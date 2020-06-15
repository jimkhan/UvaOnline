#include<bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin); // redirects standard input
    //freopen("output.txt", "w", stdout); // redirects standard output
    int i,j,k,l,a,n,p;
    string s;
    while(cin>>n,n)
    {
        a=0;l=99999999;p=n;
        cin.ignore();
        while(n--)
        {
            getline(cin,s);
            k=0;
            for(i=0; i<s.size(); i++)
            {
                if(s[i]==' ')
                {
                    k++;
                }
            }
            l=min(l,k);
            a+=k;

        }
        if(l==0)
        {
            printf("%d\n",a);
        }
        else if(l==a)
        {
            printf("0\n");
        }
        else{
            printf("%d\n",a-(l*p));
        }

    }
}
