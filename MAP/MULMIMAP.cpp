#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <list>
#include <string>
#include <stack>
#include <queue>

using namespace std;



int main()
{

    int a,b,arr[50],arr2[10][3],n,t,num,i,x;
    char c[100],ch,ch1[10][100];
    float f;
    double d;
    string ss,sp;
    vector<string>vs;
    vector<int>vi;
    multimap<char,int>mmc;

     ///unique key muliple value, just key sorted,///


    ///   NOT NEEDed   ///
    /*/...............................   MULTIMAP
    I found that they have one key and multiple values not unique value and which hold all of it's value
    ***DUPLICATE KEY AND ===========( HOLD  VALUE) EX -- DIctionary  **

    A map (also called an associative array) is a set where each element is a pair,
    called a key/value pair.

    The key is used for sorting and indexing the data, and must be unique.
    The value is the actual data.

    A multimap (also called a dictionary) is a map that allows duplicate keys. Real-life dictionaries are
    multimaps: the key is the word, and the value is the meaning of the word. All the keys are sorted in
    ascending order, and you can look up the value by key. Some words can have multiple meanings,
    which is why the dictionary is a multimap rather than a map.

    ............................./*/


      cin>>n;

    for(a=0; a<n; a++)
    {
        cin>>ch;
        cin>>num;
        mmc.insert(pair<char,int>(ch,num));
    }

    cout<<mmc.size()<<endl<<endl;

    multimap<char,int>::iterator p=mmc.begin();
    multimap<char,int>::iterator q=mmc.end();

    while(p!=q)
    {
        cout<<p->first<<"    "<<p->second<<endl;
        p++;
    }


    ///another///



    n=7;

    for(a=0; a<n; a++)
    {
        cin>>ch;
        cin>>ss;
        mmc.insert(pair<char, string>(ch,ss));
        // mmc[ch][]=ss;
        ss.clear();
    }

    ss="kotai";
    multimap<char, string>::iterator p =mmc.begin();
    cout<<endl<<endl;
    p=mmc.find('c');
    cout << p->first << " " << p->second << endl;
    cout<<"madhdf"<<endl<<endl;

    p=mmc.begin();
    while (p != mmc.end())
    {
        cout << p->first << " " << p->second << endl;
        vs.push_back( p->second);
        ++p;
    }

    for(a=0; a<vs.size(); a++)
        cout<<vs[a]<<endl;











/*

//Program tested on Microsoft Visual Studio 2008 - Zahid Ghadialy
//This program shows use of multi-maps
//We input multiple phone numbers for different people
#include<iostream>
#include<map>
#include <string>

using namespace std;

//forward declaration
void printer(multimap<string, int> pN);

int main()
{
  multimap<string, int> phoneNums;

  //Insert key, value as pairs
  phoneNums.insert(pair<string, int>("Joe",123));
  phoneNums.insert(pair<string, int>("Will",444));
  printer(phoneNums);

  //Insert duplicates
  phoneNums.insert(pair<string, int>("Joe",369));
  phoneNums.insert(pair<string, int>("Smith",567));
  phoneNums.insert(pair<string, int>("Joe",888));
  phoneNums.insert(pair<string, int>("Will",999));
  printer(phoneNums);

  //Checking frequency of different keys
  cout<<"\n\nFrequency of different names"<<endl;
  cout<<"Number of Phones for Joe = "<<phoneNums.count("Joe")<<endl;
  cout<<"Number of Phones for Will = "<<phoneNums.count("Will")<<endl;
  cout<<"Number of Phones for Smith = "<<phoneNums.count("Smith")<<endl;
  cout<<"Number of Phones for Zahid = "<<phoneNums.count("Zahid")<<endl;

  //Print all Joe from the list and then erase them
  pair<multimap<string,int>::iterator, multimap<string,int>::iterator> ii;
  multimap<string, int>::iterator it; //Iterator to be used along with ii
  ii = phoneNums.equal_range("Joe"); //We get the first and last entry in ii;
  cout<<"\n\nPrinting all Joe and then erasing them"<<endl;
  for(it = ii.first; it != ii.second; ++it)
  {
    cout<<"Key = "<<it->first<<"    Value = "<<it->second<<endl;
  }
  phoneNums.erase(ii.first, ii.second);
  printer(phoneNums);

  return 0;
}

//This method prints the vector
void printer(multimap<string, int> pN)
{
  cout<<"\n\nMultimap printer method"<<endl;
  cout<<"Map size = "<<pN.size()<<endl;
  multimap<string, int>::iterator it = pN.begin();
  while(it != pN.end())
  {
    cout<<"Key = "<<it->first<<"    Value = "<<it->second<<endl;
    it++;
  }
}
*/



    return 0;
}










