#include<stdio.h>
int main()
{
    int a,b,arr[100],i,n,s=0,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d %d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(arr[i]>=a and arr[i]<=b)
        {
            s=s+arr[i];
        }
        else 
        {
            sum=sum+arr[i];
        }
    }
    printf("%d",sum);
}