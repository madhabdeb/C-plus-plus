#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){

    int a,b;
    vector<string>vs;
    string ss;
    char c;
     a=0;
    do
    {
        c=getchar();
        if(!isspace(c))
        {
            ss.push_back(c);
        }
        else
        {
            vs.push_back(ss);
            ss.clear();
        }
    }while(c!='\n');

    for(a=0;a<vs.size();a++)
    {
        cout<<vs[a]<<endl;
    }

}
