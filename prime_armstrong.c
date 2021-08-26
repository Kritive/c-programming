#include<stdio.h>
#include<conio.h>
#include<math.h>

int checkPrimeNumber(int n);
int checkArmstrongNumber(int n);

int main()
{
   int i,n,flag;
   printf("enter a number:");
   scanf("%d",&n);

   // To check Prime Number
   flag=checkPrimeNumber(n);
   if (flag==1)
   {
      printf("\n%d is a Prime Number",n);
   }
   else
   {
      printf("\n%d is not a Prime Number",n);
   }

   //To check Armstrong Number
   flag=checkArmstrongNumber(n);
   if (flag==1)
   {
      printf("\n%d is a Armstrong Number",n);
   }
   else
   {
      printf("\n%d is not a Armstrong Number",n);
   }
   return 0;
}

// Function for Prime Number
int checkPrimeNumber(int n)
{
   int i,flag=1,squareroot;
   squareroot=sqrt(n);
   for ( i = 2; i <= squareroot; i++)
   {
      if (n%i==0)
      {
         flag=0;
         break;
      }  
   }
return flag;   
}

//Function for Armstrong Number
int checkArmstrongNumber(int n)
{
   int originalnumber,rem,flag,result=0;
   originalnumber=n;
   while (originalnumber!=0)
   {
      rem=originalnumber%10;
      result=result+rem*rem*rem;
      originalnumber=originalnumber/10;
   }
   if (result==n)
   {
      flag=1;
   }
   else
   {
      flag=0;
   }
   return flag;   
}