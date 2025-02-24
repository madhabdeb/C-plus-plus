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
//////////////  find()=>with this ,we can search a single char or a string  ......./////////////////
/////////////   ......////////////
////////////    NPOS ==>ONE KIND OF ITERATOR TYPE AND IT MEANS NOPOSITON(IN THE STRING MOST USE IN STR)........../////////


    int a,b,pre1,pre2,x;
    char c,ch[300],ch1[10][100],cf,cs,cc;
    string ss,sp;
//............................................................//

    cin.get(ch,100);
    ss=ch;


///////////// CODE FOR STRING  //////////////////////////////

    string::size_type position=ss.find("sonai");

    if(position!=string::npos)      ///////// if(ss.find("sonai")!=string::npos)
    {
        cout<<"found     "<<position<<endl;
    }
    else
    {
        cout<<"not"<<endl;
    }

cout<<endl<<endl;

///////////// CODE FOR CHARACTER      //////////////////////////////

      if(ss.find(' ')!=string::npos)
    {
        cout<<"found     "<<position<<endl;
    }
    else
    {
        cout<<"not"<<endl;
    }


cout<<endl<<endl;
///////////// CODE FOR  SEQUENCE OF SOME CHARACTER HAVE OR NOT     //////////////////////////////
string text;
getline (cin, text);

string::size_type position = text.find (' ');   //POSITION =INT VALUE REFFER STRING INDEX
if (position != string::npos)
{
    if  (text.find (' ', position+1) != string::npos)
    {
        cout << "Contains at least two spaces!" << endl;
    }
    else
    {
        cout << "Contains less than two spaces!" << endl;
    }
}
else
{
    cout << "Contains no spaces!" << endl;
}

    return 0;

}



