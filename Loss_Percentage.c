#include<stdio.h>
int main()
{
    float X,Y,Z,i;
    scanf("%f%f",&X,&Y);
    Z=X-Y;
    i=(Z*100)/X;
    printf("%.2f",i);
}