#include<stdio.h>
#include<vector>
#include<iostream>
#include<map>
using namespace std;

int main(){

    int a,b,c,t,n;
    vector<string>vs;
    vector<int>vi;
    string ss,sp;

    cin>>t;
    for(a=0;a<t;a++)
    {
        cin>>ss;
        cin>>n;
        vs.push_back(ss);
        vi.push_back(n);
        //n.clear();
        ss.clear();
    }

    for(a=0;a<vs.size();a++)
    {
        cout<<vs[a]<<" "<<vi[a]<<endl;
    }

  return 0;
}


