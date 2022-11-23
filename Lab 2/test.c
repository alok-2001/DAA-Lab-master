#include <stdio.h>
#include <string.h>

int main()
{

    char s[100], s1[100];

    printf("Enter first large number: ");
    gets(s);
    printf("Enter second large number: ");
    gets(s1);

    int a[101], b[101], c[102], d[101];

    for (int i = 0; i < strlen(s); i++)
    {

        a[i] = s[i] - 48; // storing numbers into array

        b[i] = s1[i] - 48;
    }

    int carry = 0, sum = 0;

    for (int i = strlen(s) - 1; i >= 0; i--)
    {

        sum = (a[i] + b[i]) + carry; // adding one by one digit

        if (sum >= 10)
        {

            carry = 1;

            c[i + 1] = sum - 10; // taking care of carry
        }

        else
        {

            c[i + 1] = sum;

            carry = 0;
        }

        if (i == 0 && carry == 1)
            c[0] = 1;

        sum = 0;
    }

    for (int i = 1; i <= strlen(s); i++)
        printf("%d", c[i]);

    int diff = 0;
    carry = 0;
    for (int i = strlen(s) - 1; i >= 0; i--)
    {
        if (a[i] < b[i] + carry)
        {
            diff = a[i] + 10 - b[i] - carry;
            carry = 1;
        }
        else
        {
            diff = a[i] - b[i] - carry;
            carry = 0;
        }
        d[i] = diff;
    }
    printf("\n");
    for (int i = 0; i < strlen(s); i++)
        printf("%d", d[i]);
    printf("\n");
}