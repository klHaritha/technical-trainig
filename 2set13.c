#include <stdio.h>

int main()
{
    int n,i,count=0;
    
    printf("enter the num:");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==0)
        
    {
        printf("yes prime number");
    
    }
    else
    {
        printf("not")
