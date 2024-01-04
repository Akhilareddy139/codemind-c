#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum1=0,sum2=0;
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            sum2=sum2+arr[i];
        }
        if(i%2==1)
        {
            sum1=sum1+arr[i];
        }
    }
    printf("%d",abs(sum1-sum2));
    
    return 0;
}