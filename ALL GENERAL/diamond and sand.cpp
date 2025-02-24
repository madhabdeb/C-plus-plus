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
    int a,b,c,n,x,i,j,num;
    char ch;
    string ss,sp;
    stack<char>stc;


    cin>>num;
    scanf("%c",&ch);
    for(i=0; i<num; i++)
    {
        getline(cin,ss,'\n');
        n=0;

        for(a=0; a<ss.size(); a++)
        {
            if(ss[a]=='<')
            {
                stc.push('<');

            }
            else if(ss[a]=='>'&&stc.top()=='<')
            {
                stc.pop();
                n++;
            }

        }
        cout<<n<<endl;
        ss.clear();
        while(!stc.empty())
        {
            stc.pop();
        }

    }

    return 0;
}
