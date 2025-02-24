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

    int a,b,arr[50],arr2[10][3],n,t,num,value,pre1,pre2,x;
    char c,ch[300],ch1[10][100],cf,cs,cc;
    float f;
    double d;
    string ss,sp;
    vector<string>vs;

//............................................................//


//////////////  SUBSTR=SuBSTRING OF A STRING ////////////////////

    ss="ma";
    ss="i love u";
    sp = ss.substr (5,5);

    cout<<sp;

    cout<<endl<<endl<<endl;


//////////////  ERASE      ////////////////////

    string text = "This is a test";
    text.erase (5,5);
    cout<<text;




 /*
   std::string base="this is a test string.";
  std::string str2="n example";
  std::string str3="sample phrase";
  std::string str4="useful.";

  // replace signatures used in the same order as described above:

  // Using positions:                 0123456789*123456789*12345
  std::string str=base;           // "this is a test string."
  str.replace(9,5,str2);          // "this is an example string." (1)
  str.replace(19,6,str3,7,6);     // "this is an example phrase." (2)
  str.replace(8,10,"just a");     // "this is just a phrase."     (3)
  str.replace(8,6,"a shorty",7);  // "this is a short phrase."    (4)
  str.replace(22,1,3,'!');        // "this is a short phrase!!!"  (5)

  // Using iterators:                                               0123456789*123456789*
  str.replace(str.begin(),str.end()-3,str3);                    // "sample phrase!!!"      (1)
  str.replace(str.begin(),str.begin()+6,"replace");             // "replace phrase!!!"     (3)
  str.replace(str.begin()+8,str.begin()+14,"is coolness",7);    // "replace is cool!!!"    (4)
  str.replace(str.begin()+12,str.end()-4,4,'o');                // "replace is cooool!!!"  (5)
  str.replace(str.begin()+11,str.end(),str4.begin(),str4.end());// "replace is useful."    (6)
  std::cout << str << '\n'

 */

    cout<<endl<<endl<<endl;

//////////////  ERASE      ////////////////////

    string text = "This is a test";
    text.replace (5,2,"was");
    cout<<text;

   /*
    std::string str ("This is an example sentence.");
  std::cout << str << '\n';
                                           // "This is an example sentence."
  str.erase (10,8);                        //            ^^^^^^^^
  std::cout << str << '\n';
                                           // "This is an sentence."
  str.erase (str.begin()+9);               //           ^
  std::cout << str << '\n';
                                           // "This is a sentence."
  str.erase (str.begin()+5, str.end()-9);  //       ^^^^^
  std::cout << str << '\n';

   */

    cout<<endl<<endl<<endl;

    /*        */
    return 0;
}
