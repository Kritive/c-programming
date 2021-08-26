#include<stdio.h>
int main()
{
    int i,x,y,mul;
    printf("enter two numbers x & y\n");
    printf("the multiplication table of x upto y :");
    scanf("%d%d",&x,&y);
    printf("\nmultiplication table of %d upto %d is:\n",x,y);
    for ( i = 1; i <= y; i++)
    {
        
        mul=x*i;
        printf("\n%d*%d=%d",x,i,mul);
    }
return 0;    
}