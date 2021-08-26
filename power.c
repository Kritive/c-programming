#include <stdio.h>
#include <math.h>
int main() 
{
    float base, exp, result;
    printf("Enter a base number: ");
    scanf("%f", &base);
    printf("Enter an exponent: ");
    scanf("%f", &exp);
    result = pow(base, exp);
    printf("%.1f^%.1f = %.2f", base, exp, result);
    return 0;
}
