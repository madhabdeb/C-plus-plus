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

    ///  PUSH OR POP one happend at a time //////////////////
    ///   INPUT WAY AND OUT WAY DIFFERENT ........../////////////

    int a,b,arr[50],arr2[10][3],n,t,num,*p,i,x;
    char c,ch[300],ch1[10][100];
    float f;
    double d;
    string ss,sp;
    vector<string>vs;
    vector<int>vi;
    queue<int>qi;

    cout<<"size of the queue:  "<<  qi.size()<<endl;

    for(a=0;a<5;a++)
    {
        qi.push(a);
    }


    cout<<"front of queue   "<<qi.front()<<endl;
    cout<<"back of queue   "<<qi.back()<<endl;

     for(a=0;!qi.empty();a++,qi.pop())
    {
       // cout<<qi[a]<<endl;         NOT POSSIBLE////
        vi.push_back(qi.front());
        cout<<qi.front()<<endl;
    }



    cout<<"madhab"<<endl;



     /*        */

    return 0;
}
