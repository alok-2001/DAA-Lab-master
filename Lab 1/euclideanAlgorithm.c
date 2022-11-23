#include <stdio.h>
#include <stdlib.h>

struct gcd
{
    int r1, r2, r, s, t, q;
    int s1;
    int s2;
    int t1;
    int t2;
};
int main()
{
    int a, b;

    printf("Enter two Values: ");
    scanf("%d", &a);
    scanf("%d", &b);

    struct gcd *table;
    table = malloc(sizeof(struct gcd));
    table->s1 = 1;
    table->s2 = 0;
    table->t1 = 0;
    table->t2 = 1;
    table->r1 = a;
    table->r2 = b;
    printf("\nq\tr1\tr2\tr\ts1\ts2\ts\tt\tt1\tt2\tt\n");
    while (table->r2 > 0)
    {
        table->q = table->r1 / table->r2;
        table->r = (table->r1 - (table->q * table->r2));
        table->r1 = table->r2;
        table->r2 = table->r;
        table->s = (table->s1 - (table->q * table->s2));
        table->s1 = table->s2;
        table->s2 = table->s;

        table->t = (table->t1 - (table->q * table->t2));
        table->t1 = table->t2;
        table->t2 = table->t;

        printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n", table->q, table->r1, table->r2, table->r, table->s1, table->s2, table->s, table->t, table->t1, table->t2, table->t);
    }

    printf("\n\ngcd(%d,%d) = %d", a, b, table->r1);
    printf("\ns = %d", table->s1);
    printf("\nt = %d", table->t1);
    return 0;
}