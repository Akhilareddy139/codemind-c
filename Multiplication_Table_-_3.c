#include<stdio.h>
int main()
{
    int i,n,r,a;
    scanf("%d%d%d",&n,&a,&r);
    for(i=a;i<=r;i++)
    {
        printf("%d x %d = %d
",n,i,n*i);
    }
}