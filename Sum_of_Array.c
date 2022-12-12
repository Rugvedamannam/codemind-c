#include<stdio.h>
int main()
{
    int i,n,x=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        x=x+a[i];
    }
    printf("%d",x);
}