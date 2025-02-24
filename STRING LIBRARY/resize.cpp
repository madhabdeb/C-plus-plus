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


int main ()
{
  std::string str ("I like to code in C");
  std::cout << str << '\n';

  unsigned sz = str.size();

  str.resize (sz+2,'+');
   ss.resize(100,'x');


  std::cout << str << '\n';

  str.resize (14);
  std::cout << str << '\n';
  return 0;
}
