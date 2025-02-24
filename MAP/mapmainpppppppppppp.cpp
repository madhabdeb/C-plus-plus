#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <list>
#include <string>

using namespace std;

int main()
{

/// map is an associative array  in which unique keys are arranged with value /////////
///  MAP=UNIQUE KEY +  HOLD UNIQUE VALUE  //////////////
///UNIQUE KEY AND ===========(UNIQUE VALUE HOLD)//////////////////

///  MAP=U.D.ADDRESS + VALUE ///////////////
///   MAP A VALUE ITERATOR DIYA OUT PUT  KORTE HOY   //////////////
  /// unique key unique value, sorted ==(when u traverse using begin(),end())///



    int a,b,c,n,num;
    char ch;
     map<char,int>mp;

    /*
        map<char,int>m;

        for(a=0;a<5;a++)
        {
        m.insert(pair<char,int>('a'+a,'a'+a));

        }

         map<char,int>::iterator p;
         for(a=0;a<5;a++)
         {
            p=m.find('a'+a);
            cout<<p->first<<"  "<< p->second<<endl;

         }

    map<string,int>m;
    vector<string>vs;
    char ch1,ch[100];
    int n,num;
    cin>>n;
    scanf("%c",&ch1);
    for(a=0; a<n; a++)
    {
        gets(ch);
        cin>>num;
        scanf("%c",&ch1);
        m.insert(pair<string,int>(ch,num));
        vs.push_back(ch);
    }
    map<string,int>::iterator p;
    for(a=0; a<n; a++)
    {
        p=m.find(vs[a]);
        cout<<p->first<<" = "<<p->second<<endl;
    }

*/


    /// unique key unique value, sorted ///
/*
       cin>>n;
    for(a=0;a<n;a++)
    {
    cin>>ch;
    cin>>num;
    mp[ch]=num;
    }

    map<char,int>::iterator p=mp.begin();
    map<char,int>::iterator q=mp.end();

    cout<<mp.size()<<endl<<endl;

    for( ; p!=q;p++)
    {
        cout<<p->first<<"     "<<p->second<<endl;


    }
        */

    /*        */

    return 0;

}
