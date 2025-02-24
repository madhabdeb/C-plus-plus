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

using namespace std;


int main()
{

    /// PUSH OR POP ONE ITEM AT THE END AT A TIME  ///////////////////////
    ///  J KUNU EK DIK NIYA KAJ   .......//////////////////
    /// INPUT AND OUTPUT  WITH   ONE WAY   //////////////////
    /// imposible taverse//

    int a,b,arr[50],arr2[10][3],n,t,num,i,x;
    stack<int>st;




/*    */

    //////................/  PUSHING  ELE MENTS  ..........////////////////////



    for(a=0;a<5;a++)
    {
        st.push(a+3);
    }

     for(a=0;!st.empty();a++,st.pop())
    {

        vi[a]=st.top();
        cout<<st.top()<<endl;
    }

    return 0;
}
