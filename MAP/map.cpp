#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<ctype.h>
#include<list>
#include<map>
#include<cstdlib>
#include<vector>

using namespace std;
map<string,int>m;

int main()
{

    int a,b,c,t,n;

    vector<string>vs,vh;
    vector<int>vi;
    string ss,sp;

    cin>>t;
    for(a=0; a<t; a++)
    {
        cin>>ss;

        vs.push_back(ss);


    }
    for(a=0; a<vs.size(); a++)
    {
        m[vs[a]]++;
        if (m[vs[a]]>1)
        {
            vh.push_back(vs[a]);
        }
    }
    map<string,int>::iterator p;
    for(a=0; a<vh.size(); a++)
    {
       // p=m.find(vs[a]);
        //cout<<p->first<<"    "<<p->second<<endl;
        cout<<vs[a]<<"    "<<m[vs[a]]<<endl;

    }
    return 0;

}
