#include<stdio.h>
int main()
{
    int a,b,c,d,e,X;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    X=(a+b+c+d+e)/5;
    if(X>=90)
    {
        printf("Grade A");
    }
    else if(X>=80)
    {
        printf("Grade B");
    }
    else if(X>=70)
    {
        printf("Grade C");
    }
    else if(X>=60)
    {
        printf("Grade D");
    }
    else if(X>=40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
}