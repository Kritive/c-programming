#include<stdio.h>
int main()
{
    int i,fact=1,n;
    printf("enter a postive number ");
    scanf("%d",&n);
    if (n<=0)
    {
        printf("error!!!");
    }
    else
    {
        for ( i = 1; i <= n; i++)
        {
            fact=fact*i;
        }
    printf("factorial= %d",fact);    
    }
    return 0;   
}