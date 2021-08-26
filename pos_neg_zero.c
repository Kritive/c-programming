#include<stdio.h>
int main()
{
    int n,temp;
    printf("enter a number");
    scanf("%d",&n);
    temp=n;
    if (temp==0)
    {
        printf("the given number is zero");
    }
    else if(temp>0)
    {
        printf("the given number is positive");
    }
    else
    {
        printf("the given number is negative");
    }
    
    return 0;
}