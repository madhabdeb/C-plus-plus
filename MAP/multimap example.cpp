#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <list>
#include <string>
#include <stack>
#include <queue>

using namespace std;



    int main()
{
    int a,b,c,n,x,i,j;

    float f;
    double d;
    string ss,sp;
     multimap<string,string>mms;


//............................................................//
    cin>>n;
    for(a=0;a<n;a++)
    {
        cin>>ss>>sp;
        cout<<ss<<endl<<sp<<endl;

       // mms[ss]=sp;       PAIR MUST BE USE//

        ss.clear();
        sp.clear();
    }

         /*
    mms.insert(pair<string, string>("ram","123"));
    mms.insert(pair<string, string>("sam","123"));
    mms.insert(pair<string, string>("ram","223"));
    mms.insert(pair<string, string>("mam","123"));
    mms.insert(pair<string, string>("ram","456"));
     */

    ss="ram";
     multimap<string, string>::iterator low =mms.find(ss);
      multimap<string, string>::iterator high =mms.upper_bound(ss);

      for( ;low!=high;low++)
      {
          cout<<low->first<<"    "<<low->second<<endl;

      }




     /*        */

    return 0;
}










