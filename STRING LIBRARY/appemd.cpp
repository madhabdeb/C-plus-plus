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
#include <stack>
#include <queue>

using namespace std;


int main()
{

    int a,b,arr[50],arr2[10][3],n,t,num,*p,i,x;
    char c[100],ch,ch1[10][100];
    float f;
    double d;
    string ss,sp,str,str2,str3;
    vector<string>vs;
    vector<int>vi;


  //............................................................//

    ss="madhab";
    sp="   dam";
    ss.append(sp);

    cout<<ss<<endl;
   str3="print 10 and then 5 more";
   str2="Writing ";


  str.append(str2);                       // "Writing "
  str.append(str3,6,3);                   // "10 "
  str.append("dots are cool",5);          // "dots "
  str.append("here: ");                   // "here: "
  str.append(10u,'.');                    // ".........."
  str.append(str3.begin()+8,str3.end());  // " and then 5 more"
  str.append<int>(5,0x2E);                // "....."





     /*        */

    return 0;
}
