//* * * * *
//* * * *
//* * * 
//* *
//*
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int i,j,row;
    printf("enter the number of rows:");
    scanf("%d",&row);
    for ( i = row; i >= 1; i--)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("* ");
        }  
        printf("\n");  
    }    
return 0;
}