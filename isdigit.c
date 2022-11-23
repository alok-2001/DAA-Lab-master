#include <stdio.h>

int main()
{
    char character;
    printf("Enter a character ");
    scanf("%c", &character);
    if ((character >= 'A' && character <= 'Z') || (character >= 'a' && character <= 'z'))
    {
        printf("It is an Alphabet");
    }
    else if (character >= '0' && character <= '9')
    {
        printf("It is a Digit");
    }
    else
    {
        printf("Special Character");
    }
    return 0;
}