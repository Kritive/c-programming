#include <stdio.h>
int main()
{
    int i,rev=0,rem,num,temp;
    printf("enter the number:");
    scanf("%d",&num);
    temp=num;
    while (num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
if (temp==rev)
{
    printf("%d is a palindrome.",temp);
}
else
{
    printf("%d is not a palindrome.",temp);
}

return 0;
}