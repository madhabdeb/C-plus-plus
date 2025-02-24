#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<iostream>
#include<vector>
using namespace std;

int main(){

///////////// vector  is a  array but it is called dynamic array  coz it doesn't keep memory as a static ary//////////////

/////////////   PUSH == v.push_back(value)   ===  adding a address and its value

/////////////   POP == v.pop_back( )   ===  remove a address and its value

/////////////   BEGIN == v.begin()   ===  address of 1st index///// ASSIGN TO A POINTER VARIABLE

/////////////   END == v.end()   ===  address of last index///// ASSIGN TO A POINTER VARIABLE

/////////////   CLEAR == v.clear()   ===  no element in the vector

//////////////   FRONT == v.front()   ===  value of 1st index

/////////////   BACK == v.back()   ===  value of last index

/////////////   SIZE == v.size ===  total number of element

/////////////   RESIZE == v.resize(size) ===  after sizing total number of element

/////////////   EMPTY == v.empty() ===  check the vector empty or not is tru  e return 1 else 0

//////////// WE CAN ASSIGN A VALUE TO A VECTOR EXAMPLE ==  V[0]=1000;


/////PPUSH ////
/*
   vector<int>v;
   int a,b,c,d,n;

   cout<<"size="<<v.size()<<"\n";
   for(a=0;a<3;a++)
   {
       cin>>n;
       v.push_back(n);
   }
   n=v.size();
     for(a=0;a<n;a++)
   {
    cout<<v[a]<<endl;
   }


*//////////


///////
/*  WITH IRERATOR////////////////////////////////////////////////////////////////////////////////

    vector<int>v;
    int a,b,c,d,n;

    cout<<"size="<<v.size()<<"\n";
    for(a=0;a<5;a++)
    {
       cin>>n;
       v.push_back(n);
    }
    cout<<"size="<<v.size()<<"\n";
    vector<int>::iterator p=v.begin();
    vector<int>::iterator q=v.end();
    q--;
    while(q!=p)
    {
        cout<<*q<<endl;
        q--;
    }
    cout<<*q<<endl;

    *//////////////



    ////// / INSERT  ////////////////////////////////////////////////////////////////////////////////////
/*
    vector<int>v;
   int a,b,c,d,n;

   cout<<"size="<<v.size()<<"\n";
   for(a=0;a<5;a++)
   {
       cin>>n;
       v.push_back(n);
   }
   n=v.size();

    vector<int>::iterator p=v.begin();
    cout<<"which position do you want to insert\n";
    cin>>b;
    p+=b-1;
   cout<<endl<<"value";
   cin>>b;
   v.insert(p,3,b);
    for(a=0;a<v.size();a++)
   {
    cout<<v[a]<<endl;
   }
*/
/////////////

///////////DELELTE/////////////////////////////////////////////////////////////////////////////////

/* vector<int>v;
   int a,b,c,d,n;

   cout<<"size="<<v.size()<<"\n";
   for(a=0;a<5;a++)
   {
       cin>>n;
       v.push_back(n);
   }
   n=v.size();

    vector<int>::iterator p=v.begin();
    cout<<"which position do you want to delete\n";
    cin>>b;
    v.erase(p+b,p+b+1);
    for(a=0;a<v.size();a++)
   {
    cout<<v[a]<<endl;
   }


*///
/////////USING AS SATIC ARRAY//

/*
    vector<int>v(5);
    int a,b,c,d,n;

   cout<<"size="<<v.size()<<"\n";
    n=v.size();
   for(a=0;a<n;a++)
   {
       cin>>b;
       v.push_back(b);
   }
   n=v.size();
     cout<<"size="<<v.size()<<"\n";
     for(a=0;a<n;a++)
   {
    cout<<v[a]<<endl;
   }
*///



///////  FRONT  BACK/////////
/*

    cout<<v.front()<<endl;
    cout<<v.back();
    return 0;
*/


////////////RESIZE  VECTOR/////
/*



// resizing vector
#include <iostream>
#include <vector>

int main ()
{
  std::vector<int> myvector;

  // set some initial content:
  for (int i=1;i<10;i++) myvector.push_back(i);

  myvector.resize(5);
  myvector.resize(8,100);
  myvector.resize(12);

  std::cout << "myvector contains:";
  for (int i=0;i<myvector.size();i++)
    std::cout << ' ' << myvector[i];
  std::cout << '\n';

  return 0;
}

myvector contains: 1 2 3 4 5 100 100 100 0 0 0 0

/////////////////////////NORMAL ARRAY ASSIGN IN VECTOR ///////////////////////////////////////

 for(a=0;a<10;a++)
   {
   v1[a]=ary[a];
   }
    for(a=0;a<10;a++)
   {
   cout<<v1[a]<<endl;
   }



////////////////////////////UNTIL THE VECTOR BECOMES THE EMPTY /////////////////////////////////

 while(!vi.empty())
    {
        cout<<vi.back()<<endl;
         vi.pop_back();
    }

*/
}
