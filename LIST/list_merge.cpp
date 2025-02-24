#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<ctype.h>
#include<list>
#include<cstdlib>
using namespace std;

int main(){

    int a,c;
    list<string>li;
    list<string>ls;
    char ch[100];

    cout<<"size=="<<li.size()<<endl;
    for(a=0;a<2;a++)
    {
        gets(ch);
        li.push_front(ch);
    }
    printf("\n\n\n");
     for(a=0;a<3;a++)
    {
        gets(ch);
        ls.push_front(ch);
    }
    li.merge(ls);
    li.sort();

    list<string>::iterator p=li.begin();

    for( ;p!=li.end();)
    {
        cout<<*p<<endl;
        p++;
    }

    return 0;
}
