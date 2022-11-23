#include <stdio.h>

int multiplication(int m, int i)
{
    printf("\n");
    printf("%d x %d: %d", m, i, m * i);
    if (i < 10)
    {
        multiplication(m, i + 1);
    }
}

int main()
{
    multiplication(10, 1);
    return 0;
}

/*
int n;
if(n==0 || n==1){
    return 1;234444444444444
}
else{
    return fact(n) * fact(n-1);
}
*/