#include<stdio.h>
#include<iostream>
#include<list>
#include<map>
using namespace std;
int main()
{
///  LIST IS AS LIKE AS VECTOR WE USE ALL THE FUNCTION OF VECTOR INCLUDING   **POP_FRONT,MARGE;SORT.POUSH FRONT.///////
 ///  list k vector style a output show kora jay na means array style a //////////////
///  list k iterator diya print korte hoy  //////////////


    int a,b,c,num,t;
    float n;
    list<char>lst,nst;
    char ch;

   ///////// INPUT AND OUT PUT///////////
    /////////  list k vector style a output show kora jay na means array style a //////////////

    for(a=0; ; a++)
    {
        scanf("%c",&ch);
        if(ch=='\n')
            break;
        lst.push_front(ch);
    }
    list<char>::iterator p=lst.begin();

    while(!lst.empty())
    {
        p=lst.begin();
        nst.push_front(*p);
        lst.pop_front();
        //p++;
        cout<<"==="<<*++p<<endl;
    }

    p=nst.begin();
    while(p!=nst.end())
    {
        cout<<*p<<endl;
        p++;
    }
    return 0;
}
