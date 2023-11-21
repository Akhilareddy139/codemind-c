#include<stdio.h>
int main()
{
    int X,Y;
    scanf("%d%d",&X,&Y);
    if(X<=Y)
    {
        printf("0");
    }
    else
    {
        printf("%d",X-Y);
    }
    
}
