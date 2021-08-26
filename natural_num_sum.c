#include<stdio.h>
#include<conio.h>
#include<math.h>

int addnumber(int n);

int main()
{
    int n;
    printf("enter a positive integer:");
    scanf("%d",&n);
    printf("the sum is: %d",addnumber(n));
return 0;
}

//Sum of positive number
int addnumber(int n)
{
    if (n!=0)
    {
        return n+addnumber(n-1);
    }
    else
    {
        return n;
    }  
}