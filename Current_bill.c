#include<stdio.h>
int main()
{
    int u;
    float c,t;
    scanf("%d",&u);
    if(u<=199)
    {
        c=1.20;
    }
    else if(u>=200&&u<=400)
    {
        c=1.50;
    }
    else if(u>=400&&u<=400)
    {
        c=1.80;
    }
    else if(u>=600)
    {
        c=2.0;
    }
    t=u*c;
    if(t>=400)
    {
        t+=(t*0.15);
    }
    else
    {
        t+=100;
    }
    printf("%.2f",t);
}