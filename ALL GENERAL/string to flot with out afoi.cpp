#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

int main()
{


    int dec = 0;
    double i = 1.0;
    int ten = 1;
    int a,nm,t,y,u;
    float f,x,j,af,num=0;
    char ch[100],*s;
    x=0;
    af=0.0;
    scanf("%s",ch);

    s=ch;
    nm=j=0;
    t=1;
    u=0;
    for(; *s != '\0'; s++)
    {
        if (*s == '.')
        {
            num=(float)nm;
            for(; *s != '\0'; s++)
            {
                u++;
                if(j==0)
                {
                    j++;
                }
                else
                {
                    t*=10;
                    y=(*s - '0');
                    af+=(y*1.0)/t;
                }
            }
            if(*s=='\0')
            {
                num =num+af;
                x=7;
            }
        }
        else
        {
            nm= (nm * 10) + (*s - '0');
        }
        if(x==7)
        {
            break;
        }

    }
printf("%f",num);
    return 0;
}
