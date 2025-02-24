#include<stdio.h>
#include<iostream>
#include<vector>
#include<string.h>
#include<string>
#include<list>

using namespace std;

int main(){

    /////////////   STRING WORKS AN VARIABLE/////////


    /////////////   STRING is an ARRAY  EXPLE==SS,  SS[A] INDEX OF THAT STRING MEANS CHARECTER    /////////

    /////////// LIKe AN VARIABLE////////
    /////////// in string + means  con catanation  ////////
    /////////// STR SIZE REPRESENT THE LENGTH OF A  STRING  ////////
    /////////// PUSH_BACK MEANS  ADDING A CHAR IN THE STRING   ////////


    int a,b=0,n,num;
    vector<string>v;
    char c,ch[100],sh[100];
    string sa,se,ss;
    string s,so;
     string st[10];


    /*
    /// 2D STRING ARRAY INPUT///

    for(a=0;a<3;a++)
        {
            getline(cin,ss,'\n');
            st[a]=ss;
            ss.clear();
        }
         for(a=0;a<3;a++)
        {

            cout<<st[a]<<endl;
        }

    */





   /*

//////////////////////// WORKING AS AN VARIABLE /////////////////////////////////


    s=ss+" "+so;
    cout<<s<<endl;

    gets(ch);
    se=ch;
    cout<<se<<endl;

    //////////SIZE////////

    cout<<se.size()<<endl;

    */



  /*  cout<<endl<<endl;
    cin>>n;
    scanf("%d",&c);
    for(a=0;a<n;a++)
    {
     gets(ch);
     ss=ch;
     vc.push_back(ss);
     sa+=ss;
     b+=a;
    }
    for(a=0;a<vc.size();a++)
    {
     cout<<vc[a]<<endl;
    }
    cout<<endl<<sa<<endl<<b<<endl;*/

//////////// WORD  ////////////
/////////// WHWN A STRING BECOMES PRINT OUT IT TAKES A LOOP AND WORKS CHARACTER WISE  ////////
/////////// WE CAN ASSIGN  VECTOR<STRING>  IN A STRING VARIABLE  ////////

/*

/////////////// WORKing as an string array //////////////////////////////////
    gets(ch);
    sa=ch;
    for(a=0;a<sa.size();a++)
    {
     cout<<sa[a]<<endl;
    }

>>>>>>>>>>>>>>>  working as a sting word separate .................................


    for(a=0;a<strlen(ch);a++)
    {
        if(!isspace(ch[a]) )
        {
            ss.push_back(ch[a]);
        }
        else
        {
            v.push_back(ss);
            ss.clear();
        }

    }
            if(ch[a]=='\0')
            v.push_back(ss);

    for(a=0;a<v.size();a++)
    {
        ss=v[a];
        for(b=0;b<ss.size();b++)
        {
            cout<<v[a][b]<<endl ;
        }
    }
*/


    return 0;
}
