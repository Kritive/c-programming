#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    char op;
    float num1,num2;
    printf("enter two numbers:");
    scanf("%f%f",&num1,&num2);
    fflush(stdin);
    printf("enter the operand('+','-','*','/')");
    scanf("%c",&op);
    switch (op)
    {
    case '+':
        printf("%.1f + %.1f = %.1f", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%.1f - %.1f = %.1f", num1, num2, num1 - num2);
        break;
    case '*':
        printf("%.1f * %.1f = %.1f", num1, num2, num1 * num2);
        break;
    case '/':
        printf("%.1f / %.1f = %.1f", num1, num2, num1 / num2);
        break;
    default:
        printf("Error!!!");
        break;
    }
    return 0;
}
