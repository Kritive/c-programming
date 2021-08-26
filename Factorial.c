#include<stdio.h>
#include<conio.h>
#include<math.h>

long int factorial(int n);

int main()
{
    int n;
    printf("enter a positive integer:");
    scanf("%ld",&n);

    printf("the factorial of %ld is: %ld",n,factorial(n));
return 0;
}

// Check factorial using recursion
long int factorial(int n)
{
    if (n>=1)
    {
        return n*factorial(n-1);
    }
    else
    {
        return 1;
    }   
}
