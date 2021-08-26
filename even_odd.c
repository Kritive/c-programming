#include<stdio.h>
int main()
{
    int n,temp;
    printf("enter a number");
    scanf("%d",&n);
    temp=n%2;
    if (temp==0)
    {
        printf("the given number is even");
    }
    else
    {
        printf("the given number is odd");
    }
    return 0;
}