#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <list>
#include <string>
#include <stack>
#include <queue>
#include <set>

using namespace std;

int main()
{


   ///  permits single value

  ///  *****  sorted,iterator,  *****



    long long int a,b,c,n,x,i,j;

    int num;
    float f;
    double d;
    string ss,sp;
    vector<string>vs;
    stack<char>stc;
     set<int>msi;
     vector<set<int> >vx;

//............................................................//

    msi.insert(3);
    msi.insert(3);
    msi.insert(3);

    cout<<msi.size()<<endl<<endl;

    cin>>n;

    for(a=n;a>=1;a--)
    {
        cin>>num;
        msi.insert(num);
        vx.push_back(msi);

    }
    ///  the loop 2nd time  ///
   // for(a=n;a>=1;a--)
      // msi.insert(a);


    cout<<"madhab"<<endl;

     vector<set<int> >::iterator stl=vx.begin();
    vector<set<int> >::iterator sth=vx.end();
    cout<<"size=="<<msi.size()<<endl;

    for( ; stl!=sth;stl++)
      {

      }


    return 0;
}
