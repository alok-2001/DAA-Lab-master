#include <stdio.h>
#include <stdlib.h>
struct Queue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isFull(struct Queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty(struct Queue *q)
{
    if (q->f == q->r)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void enqueue(struct Queue *q, int val)
{
    if (isFull(q))
    {
        printf("Queue Overflow");
    }
    else
    {
        q->r = q->r + 1;
        q->arr[q->r] = val;
    }
}

int dequeue(struct Queue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("No element");
    }
    else
    {
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}
int main()
{
    struct Queue *q;

    q->size = 100;
    q->r = q->r = -1;
    q->arr = (int *)malloc(q->size * sizeof(int));

    // BFS
    int node;
    int i = 1;
    int visited[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int a[10][10] = {
        /*/ /*  1  2  3  4  5  6  7  8  9  10*/
        /* 1*/ {0, 1, 0, 1, 0, 0, 0, 0, 0, 0},
        /* 2*/ {1, 0, 1, 0, 1, 0, 1, 1, 0, 0},
        /* 3*/ {0, 1, 0, 1, 0, 0, 0, 0, 1, 1},
        /* 4*/ {1, 0, 1, 0, 0, 0, 0, 0, 0, 0},
        /* 5*/ {0, 1, 0, 0, 0, 1, 1, 0, 0, 0},
        /* 6*/ {0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
        /* 7*/ {0, 1, 0, 0, 1, 0, 0, 1, 0, 0},
        /* 8*/ {0, 1, 0, 0, 1, 0, 1, 0, 0, 0},
        /* 9*/ {0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
        /* 10*/ {0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
    };
    printf("%d", i);
    visited[i] = 1;
    enqueue(q, i);
    int node;
    while (!isEmpty(q))
    {
        node = dequeue(q);
        for (int j = 0; i < 10; j++)
        {
            if (a[node][j] == 1 && visited[j] == 1)
            {
                printf("%d", j);
                visited[j] = 1;
                enqueue(q, j);
            }
        }
    }
    {
        /* code */
    }
}
return 0;
}