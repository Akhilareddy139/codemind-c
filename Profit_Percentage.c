#include<stdio.h>
int main()
{
    float X,Y,I,P;
    scanf("%f%f",&X,&Y);
    P=Y-X;
    I=(P*100)/X;
    printf("%.2f",I);
}