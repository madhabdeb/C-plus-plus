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
//////////////  CURRENT DATA TYPER  SIZE INDICATE KORCE   ......./////////////////
/////////////   IT IS ONE TYPE OF DATATYPE ( AS LIKE ITERATOR  TYPE)......////////////
////////////    DATA TYPE SO HAVE TO CONTAIN A VARIABLE OF THE DATA TYPE........../////////


    int a,b,pre1,pre2,x;
    char c,ch[300],ch1[10][100],cf,cs,cc;
    string ss,sp;
//............................................................//

   string::size_type i;
    cin.get(ch,100);

    ss=ch;
    cout<<ss<<endl;

    for(string::size_type t=0;t<ss.length()-3;t++)
    {
        ss[t]=toupper(ss[t]);
    }

    cout<<ss<<endl;


}
