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
#include <set>

using namespace std;



    int main()
{
    long long int a,b,c,n,x,i,j;

    float f;
    double d;
    string ss,sp;
    vector<string>vs;

    stack<char>stc;

///............................................................//

    int as[ 10 ] = { 7, 22, 9, 1, 18, 30, 100, 22, 85, 13 };  ///  dont include duplecate value in set  ///
   int asize=sizeof(as)/sizeof(int);
   set<int>si(as,as+asize);
   set<int>::iterator p;

    cout<<"size--=="<<si.size()<<endl<<endl;

    si.insert(3);
    si.insert(0);

    for(p=si.begin();p!=si.end();p++)
    {
     cout<<*p<<endl;
    }

    cout<<"size--=="<<si.size()<<endl<<endl;

     set<int>::iterator it = si.upper_bound(6);
      cout << "\nupper_bound(4) = " << *it << endl;

       set<int>::iterator itt = si.lower_bound(3);
      cout << "\nlower_bound(4) = " << *itt << endl;

     /*        */

    return 0;
}










