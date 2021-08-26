#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter 3 numbers a,b,c:\n");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b&&a>c)
    {
        printf("%d is greater\n",a);
        if (b<c)
        {
            printf("%d is smaller\n",b);
        }
        else
        {
            printf("%d is smaller\n",c);
        }
        
    }
    else if (b>a&&b>c)
    {
        printf("%d is greater\n",b);
        if (a<c)
        {
            printf("%d is smaller\n",a);
        }
        else
        {
            printf("%d is smaller\n",c);
        }
    }
    else
    {
        printf("%d is greater\n",c);
        if (b<a)
        {
            printf("%d is smaller\n",b);
        }
        else
        {
            printf("%d is smaller\n",a);
        }
    }
}
