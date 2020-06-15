#include<bits/stdc++.h>

using namespace std;

char arr[200];



int main()

{
    int i,j,k,l,t;
    //freopen("input.txt", "r", stdin); // redirects standard input
    //freopen("output.txt", "w", stdout); // redirects standard output

    arr['A']='2';
    arr['B']='2';
    arr['C']='2';
    arr['D']='3';
    arr['E']='3';
    arr['F']='3';
    arr['G']='4';
    arr['H']='4';
    arr['I']='4';
    arr['J']='5';
    arr['K']='5';
    arr['L']='5';
    arr['M']='6';
    arr['N']='6';
    arr['O']='6';
    arr['P']='7';
    arr['R']='7';
    arr['S']='7';
    arr['T']='8';
    arr['U']='8';
    arr['V']='8';
    arr['W']='9';
    arr['X']='9';
    arr['Y']='9';
    arr['0']='0';
    arr['1']='1';
    arr['2']='2';
    arr['3']='3';
    arr['4']='4';
    arr['5']='5';
    arr['6']='6';
    arr['7']='7';
    arr['8']='8';
    arr['9']='9';




    cin>>t;
    cin.ignore();


    while(t--)
    {

        cin>>l;
        string a="",b,s;
        map<string,int> mp;
        map<string,int> :: iterator it;
        while(l--)
        {
            cin>>s;
            b="";
            for(i=0; i<s.size(); i++)
            {
                if((s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9'))
                {
                    a=arr[s[i]];
                    b+=a;
                    if(b.size()==3)
                    {
                        b+="-";
                    }
                }

            }
            //cout<<b<<endl;
            mp[b]++;



        }

        int fl=0;
        for(it=mp.begin(); it!=mp.end(); it++)
        {
            if(it->second>1)
            {
                cout<<it->first<<" "<<it->second<<endl;
                fl=1;
            }

        }
        if(!fl)
        {
            printf("No duplicates.\n");
        }
        if(t)
        printf("\n");


    }

}
