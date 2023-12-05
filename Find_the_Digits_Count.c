#include<stdio.h>
int main()
{
    int N,r,dc=0;
    scanf("%d",&N);
    while(N>0)
    {
        r=N%10;
        dc++;
        N=N/10;
    }
    printf("%d",dc);
}