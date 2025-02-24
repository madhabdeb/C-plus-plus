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
  std::string str1 ("green apple");
  std::string str2 ("red apple");

  if (str1.compare(str2) != 0)    ////return 0 if same same as c 's strcmp///
    std::cout << str1 << " is not " << str2 << '\n'; /////green apple is not red apple

  if (str1.compare(6,5,"apple") == 0)
    std::cout << "still, " << str1 << " is an apple\n";/////still, green apple is an apple

  if (str2.compare(str2.size()-5,5,"apple") == 0)
    std::cout << "and " << str2 << " is also an apple\n";/////////and red apple is also an apple

  if (str1.compare(6,5,str2,4,5) == 0)
    std::cout << "therefore, both are apples\n";    ///////////therefore, both are apples




  return 0;
}
