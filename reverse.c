#include <stdio.h>
int main()
{
    int i,rev=0,rem,num;
    printf("enter the number:");
    scanf("%d",&num);
    while (num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
printf("reverse= %d",rev);
return 0;
}