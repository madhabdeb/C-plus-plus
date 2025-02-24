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
  std::string buyer ("money");
  std::string seller ("goods");

  std::cout <<"buyer       "<<buyer<< '\n';
  std::cout << "seller    " << seller << '\n';

  seller.swap (buyer);

  std::cout << buyer;
  std::cout << "         " << seller << '\n';

  return 0;
}
