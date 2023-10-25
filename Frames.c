#include<stdio.h>
int main()
{
    int N,M,X,Y,peri;
    scanf("%d%d%d",&N,&M,&X);
    peri=2*(N+M);
    Y=peri*X;
    printf("%d",Y);
}