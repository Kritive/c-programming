#include<stdio.h>
#include<conio.h>
#include<math.h>

int checkPrimeNumber(int n);

int main()
{
   int i,flag=0,n;
   printf("\nEnter a number:");
   scanf("%d",&n);

   //check for prime
   for ( i = 2; i <= n/2; ++i)
   {
      if (checkPrimeNumber(i)==1)
      {
         if (checkPrimeNumber(n-i)==1)
         {
            printf("%d = %d + %d\n", n, i, n - i);
            flag=1;
         }   
      }   
   }
   if (flag==0)
   {
   printf("%d cannot be expressed as the sum of two prime numbers.", n);
   }
   return 0;
}

// function to check prime number
int checkPrimeNumber(int n)
{
   int i,prime=1;
   if (n==0||n==1)
   {
      prime=0;
   }
   else
   {
      for ( i = 2; i <= n/2; ++i)
   {
      if (n%i==0)
      {
         prime=0;
         break;
      } 
   }
   } 
return prime;    
}