#include <stdio.h>
struct knapsack
{
    float Object;
    float profit;
    float wt;
    float ratio;
};

void bsortDesc(struct knapsack kp[], int s)
{
    int i, j;
    struct knapsack temp;

    for (i = 0; i < s - 1; i++)
    {
        for (j = 0; j < (s - 1 - i); j++)
        {
            if (kp[j].ratio < kp[j + 1].ratio)
            {
                temp = kp[j];
                kp[j] = kp[j + 1];
                kp[j + 1] = temp;
            }
        }
    }
}

double knapsackProfit(int weight, struct knapsack kp[], int n)
{
    // int currWeight = 0;
    double finalValue = 0.0;

    for (int i = 0; i < n; i++)
    {
        if (kp[i].wt <= weight)
        {
            weight -= kp[i].wt;
            // currWeight = currWeight + kp[i].wt;
            finalValue = finalValue + kp[i].profit;
        }
        else
        {
            // int remainingWeight = weight - currWeight;
            // currWeight = currWeight + ((double)remainingWeight / kp[i].wt);
            finalValue += kp[i].profit * ((double)weight / (double)kp[i].wt);
            break;
        }
    }
    return finalValue;
}

int main()
{
    int n = 5;
    struct knapsack kp[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter object, profit, weight %d:", i + 1);
        scanf("%f%f%f", &kp[i].Object, &kp[i].profit, &kp[i].wt);
    }
    for (int i = 0; i < n; i++)
    {
        kp[i].ratio = kp[i].profit / kp[i].wt;
    }
    bsortDesc(kp, n);

    printf("\n Total Profit: %f\n", knapsackProfit(60, kp, n));

    printf("Object\tProfit\tWeight\tP/W\n");
    for (int i = 0; i < n; i++)
    {
        printf("%.2f\t%.2f\t%.2f\t%.2f\n", kp[i].Object, kp[i].profit, kp[i].wt, kp[i].ratio);
    }
    return 0;
}