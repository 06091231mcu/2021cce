#include <stdio.h>

void sort(int *small, int *big)
{
    int temp = 0;

    if (*small > *big)
    {
        temp = *small;
        *small = *big;
        *big = temp;
    }
}

int main()
{
    int min, mid, max;

    scanf("%d %d %d", &min, &mid, &max);

    sort(&min, &mid);
    sort(&min, &max);
    sort(&mid, &max);

    printf("%d %d %d", min, mid, max);

    return 0;
}