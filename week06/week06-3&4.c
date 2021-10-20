#include <stdio.h>

void sort(int *small, int *big)
{
    int temp = 0;

    if(*small > *big)
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

    if(min+mid > max)
    {
        if(min*min + mid*mid == max*max)
            printf("直角");
        else if(min*min + mid*mid > max*max)
            printf("銳角");
        else
            printf("鈍角");
    }
    else
        printf("錯誤");
    
    return 0;
}