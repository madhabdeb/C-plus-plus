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


  ///  Multiset permits single's duplicate value

   /// *****  sorted,iterator,  *****



    long long int a,b,c,n,x,i,j;

    float f;
    double d;
    string ss,sp;
    vector<string>vs;
    vector<int>vi;
    stack<char>stc;
    multiset<int>msi;

//............................................................//

    msi.insert(3);
    msi.insert(3);
    msi.insert(3);

    cout<<msi.size()<<endl<<endl;

    cin>>n;
    for(a=n;a>=1;a--)
    {
       msi.insert(a);
    }
    for(a=n;a>=1;a--)
    {
       msi.insert(a);
    }

    cout<<"madhab"<<endl;

    set<int>::iterator stl=msi.begin();
    set<int>::iterator sth=msi.end();
    cout<<"size=="<<msi.size()<<endl;

    for( ; stl!=sth;stl++)
      {
          cout<<*stl<<endl;
      }

    return 0;
}










