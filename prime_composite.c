#include<stdio.h>
#include<math.h>
int main()
{
    int i,c=0,n,flag = 1, squareRoot;;
    printf("enter a number:");
    scanf("%d",&n);
   // computing the square root
   //squareRoot = sqrt(n);
   for (i = 2; i < n; ++i) {
      // condition for non-prime number
      if (n % i == 0) {
         flag = 0;
         break;
      }
   }
   if (flag == 1)
      printf("%d is a prime number.\n", n);
   else
      printf("%d is not a prime number.\n", n);

    return 0;   
}