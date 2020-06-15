#include<bits/stdc++.h>

using namespace std;

int main()

{

    int i,j,k,l,p,t;
    string s;

    while(cin>>s && s!="#")
    {
        if(next_permutation(s.begin(),s.end()))
        {
            cout<<s<<endl;
        }
        else
        {
            printf("No Successor\n");
        }
    }
}
