#include<bits/stdc++.h>

using namespace std;

int main()

{
    //freopen("input.txt", "r", stdin); // redirects standard input
    //freopen("output.txt", "w", stdout); // redirects standard output

    int i,j,k,l,m,n,t,o;
    string p;

    cin>>t;
    getchar();
    while(t--)
    {
        map<int,string> mp;
        map<int,string>::iterator it;
        vector<int> vf;
        vector<string> vs;
        string f,s;
        getchar();
        getline(cin,f);
        stringstream st(f);

        while(st>>l)
        {
            vf.push_back(l);
        }

        getline(cin,s);
        stringstream ss(s);


        while(ss>>p)
        {
            vs.push_back(p);
           // cout<<p<<endl;
        }
        k=vf.size();
        for(i=0; i<k; i++)
        {
            mp[vf[i]]=vs[i];
        }
        for(it=mp.begin() ;it!=mp.end();it++)
        {
            cout<<it->second<<endl;
        }

        if(t)
        {
            printf("\n");
        }
    }

    return 0;
}
