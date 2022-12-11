#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    float c;
    c=sqrt((double)a);
    b=c;
    if(b==c)
    {
    printf("True");
    }
    else
    {
        printf("False");
    }
}