#include <stdio.h>

int main()
{
    int a,b,sum=0,m;
    
    printf("enter the num:");
    scanf("%d",&a);
    m=a;
    while(a!=0)
    {
        b=a%10;
        sum=sum*10+b;
        a=a/10;
        
    }
    if(m==sum)
    {
        printf("yes");
    
    }
    else
    {
        printf("no");
}
}
