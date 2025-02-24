#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<deque>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>  ///for files
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
using namespace std;

int main()
{
    int test,t=1,n,m,number;
    cin>>test;
    while(test--){
            printf("Case %d:\n",t++);
        cin>>n>>m;
        deque<int>q;
        string s;

    while(m--){
    cin>>s;
    if(s=="pushLeft"){
        cin>>number;
        if(q.size()!=n){
               q.push_front(number);
             cout<<"Pushed in left: "<<number<<endl;

        }
        else
            cout<<"The queue is full"<<endl;
    }
    else if(s=="pushRight"){
        cin>>number;
        if(q.size()!=n){
               q.push_back(number);
             cout<<"Pushed in right: "<<number<<endl;

        }
        else
            cout<<"The queue is full"<<endl;
    }
   else if(s=="popLeft"){
        if(q.empty())cout<<"The queue is empty"<<endl;
        else{
            cout<<"Popped from left: "<<q.front()<<endl;
            q.pop_front();
        }

    }
    else if(s=="popRight"){
          if(q.empty())cout<<"The queue is empty"<<endl;
        else{
            cout<<"Popped from right: "<<q.back()<<endl;
            q.pop_back();
        }
    }
    }
    }





}
