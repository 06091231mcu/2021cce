#include <stdio.h>

int main()
{
    int num, sum = 0, factroial = 1;
    scanf("%d", &num);

    for(int i = 1; i <= num; i++)
    {
        factroial *= i;
        sum += factroial;
    }

    printf("%d", sum);

    return 0;
}