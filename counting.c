#include<stdio.h>
int main()
{
    int num,count=0;
    printf("enter mltidigit integer:\n");
    scanf("%d",&num);
    while (num!=0)
    {
        num=num/10;
        count++;
    }
    printf("Number of digits: %d", count);
    return 0;
    
}