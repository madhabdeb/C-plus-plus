#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include <iostream>
#include <vector>
#include <map>
#include <list>
#include <string>

using namespace std;
map<char,int>m;

int main()
{

    int a,b,arr[10][30],sum=0,num,n;
    char c,ch[500],ch1,c1,c2;
    string ss,sp,str;
    vector<string>vs,vp;
    vector<char>vc;

    gets(ch);
    ss=ch;
    //cout<<ss;
    n=ss.size();
    for(a=0;a<n;a++)
    {
        m[ss[a]]++;
        if (m[ss[a]]==1)
        {
            vc.push_back(ss[a]);
        }
    }
    c1=vc[0];
    c2=vc[0];

    cout<<c1<<endl<<c2<<endl;

    for(a=0;a<vc.size();a++)
    {
         if(c1<vc[a])
            c1=vc[a];

         if(c2>vc[a])
            c2=vc[a];

    }


    ch1=c1-c2;
    cout<<ch1;
    return 0;
}
