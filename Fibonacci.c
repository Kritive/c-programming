#include<stdio.h>
int main()
{
    int i,num,t1=0,t2=1,next_term;
    printf("enter the number:");
    scanf("%d",&num);
    printf("%d,%d,",t1,t2);
    next_term=t1+t2;
    /*for ( i = 1; i <= num; i++)
    {
        printf("%d,",next_term);
        next_term=t1+t2;
        t1=t2;
        t2=next_term;
    }*/
    while (num>next_term)
    {
        
        printf("%d,",next_term);
        t1=t2;
        t2=next_term;
        next_term=t1+t2;
    }
    
return 0;    
}