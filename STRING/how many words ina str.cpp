#include<stdio.h>
#include<vector>
#include<iostream>
#include<map>
using namespace std;

int main(){

    vector<string>v;
    int a,b,c;
    string ss,sp;
    char ch[100];
    gets(ch);
    puts(ch);
    ss=ch;
    ss+=" ";
    cout<<ss.size()<<endl;
    printf("madhab\n\n");

    for(a=0;a<ss.size();a++)
    {
        if(ss[a]!=' ')
        {
            sp.push_back(ch[a]);
        }
        else
        {
            v.push_back(sp);
            sp.clear();
        }
        printf("%d\n",a);
    }
    for(a=0;a<v.size();a++)
        cout<<v[a]<<endl;
}

