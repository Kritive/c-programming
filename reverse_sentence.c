#include<stdio.h>
#include<conio.h>
#include<math.h>

void reverse();

int main()
{
    printf("enter a sentence:");
    reverse();
    return 0;
}

void reverse()
{
    char c;
    scanf("%c",&c);
    if (c!='\n')
    {
        reverse();
        printf("%c",c);
    }
}