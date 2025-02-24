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



    cin>>n;


    for(a=0; a<n; a++)
    {
        cin>>ch;
        cin>>num;
       mmc.insert(pair<char,int>(ch,num));

      /// mmc[ch]=num;  this way not posible ///
    }

    cout<<"madhha    ==  "<<mmc.size()<<endl<<endl;

    multimap<char,int>::iterator p=mmc.begin();
    multimap<char,int>::iterator q=mmc.end();

    while(p!=q)
    {
        cout<<p->first<<"    "<<p->second<<endl;
        p++;
    }

    cin>>ch;
    multimap<char,int>::iterator kotai=mmc.find(ch);
    multimap<char,int>::iterator padunati=mmc.upper_bound(ch);

    while(kotai!=padunati)
    {

        cout<<kotai->first<<"   "<<kotai->second<<endl;
        kotai++;
    }

    cout<<"count==="<<mmc.count(ch)<<endl;              ///  must be check count   /////

    cout<<endl<<" show all of them "<<endl;




    /*        */

    return 0;
}










