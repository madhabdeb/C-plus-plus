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
map<string,int>m;

int main()
{

    int a,b,arr[10][30],sum=0,num,n;
    char c,ch[500],ch1;
    string ss,sp,str;
    string st[10];

    vector<string>vs,vp;

    gets(ch);
    ss=ch;
    ss+=" ";
    str="madhab";
    for (a=0;a<ss.size();a++)
    {
        if (ss[a]!=' ')
        {
            sp.push_back(ss[a]);
        }
        else{
            vs.push_back(sp);
            sp.clear();
        }
    }
    for(a=0;a<vs.size();a++)
    {

        m[vs[a]]++;
        if (1<m[vs[a]])
        {
          vp.push_back(vs[a]);
        }

    }
    cout<<"size=="<<vp.size()<<endl;

    map<string,int>::iterator p;

    for(a=0;a<vp.size();a++)
    {
        p=m.find(vp[a]);
         cout<<p->first<<"  "<<p->second<<endl;
         cout<<"no entry";
    }

      cout<<endl<<"madhab====="<<endl;
      m[str]==0?cout<<"nai":cout<<"ace";
    // p=m.find(str);
     //cout<<p->first<<"  "<<p->second<<endl;


    return 0;
}
