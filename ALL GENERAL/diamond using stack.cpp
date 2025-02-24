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

    int a,b,arr[50],arr2[10][3],n,t,num,*p,i,x;
    char c[100],ch,ch1[10][100];
    float f;
    double d;
    string ss,sp;
    vector<string>vs;
    vector<int>vi;
      stack<char>stc;

//............................................................//

    num=0;
    getline(cin,ss,'\n');
    cout<<ss<<endl;
    n=ss.size();

    for(a=0;a<n;a++)
    {
        if(ss[a]!='.')
        {
            if(ss[a]=='<')
            {
                stc.push(ss[a]);
            }
            else
            {
                if(stc.top()=='<')
                {
                    num++;
                }
            }
        }
    }

    cout<<num<<endl;


     /*        */

    return 0;
}










