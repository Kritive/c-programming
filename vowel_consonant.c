#include<stdio.h>
int main()
{
    char c,lowercase,uppercase;
    printf("enter a character:\n");
    scanf("%c",&c);
    lowercase=('a'||'e'||'i'||'o'||'u');
    uppercase=('A'||'E'||'I'||'O'||'U');
    if (c==(uppercase||lowercase))
    {
        printf("vowel");
    }
    else
    {
        printf("consonant");
    }
    return 0;
}