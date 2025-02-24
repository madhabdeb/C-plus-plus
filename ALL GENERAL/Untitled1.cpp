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

    int a,b,arr[50],arr2[10][3],n,t,num,*p,i,x,j,k;
    char c[100],ch,ch1[10][100];
    float f;
    double d;
    string ss,sp;
    vector<string>vs;
    vector<int>vi,vj;

//............................................................//

    while(cin>>t&&t)
    {
        for(a=1; a<=t; a++)
        {
            cin>>i;
            cin>>j;
            vi.push_back(i);
            vj.push_back(j);
        }
        n=t;
        for(a=0; a<n-1; a++)
        {
            for(b=0; b<n-a-1; b++)
            {
                if(vi[b]>=vi[b+1])
                {
                    if(vj[b]>vj[b+1] && vi[b]==vi[b+1])
                    {


                        i=vj[b];
                        vj[b]=vj[b+1];
                        vj[b+1]=i;


                    }
                    else
                    {
                        if( vi[b]!=vi[b+1])
                        {
                            i=vi[b];
                            vi[b]=vi[b+1];
                            vi[b+1]=i;

                            i=vj[b];
                            vj[b]=vj[b+1];
                            vj[b+1]=i;
                        }


                    }
                }
                //cout<<"==="<<vi[b]<<"   "<<vj[b]<<endl;
            }
            cout<<endl;
        }

        for(a=0; a<t; a++)
        {
             cout<<vi[a]<<"    "<<vj[a]<<endl;
        }



    }








    /*        */

    return 0;
}










