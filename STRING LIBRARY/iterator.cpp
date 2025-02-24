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

int main ()
{

    string ss;

    ss="madhab";

      /*
        std::string str ("Test string");
          for ( std::string::iterator it=str.begin(); it!=str.end(); ++it)
            std::cout << *it<<endl;
          std::cout << '\n';
 */

  string ::iterator p=ss.begin();

  while(p!=ss.end())
    cout<<*p++<<endl;




   /*        */

  return 0;
}
