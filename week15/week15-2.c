#include <stdio.h>

int main()
{
    int a, b, ans = 1;

    scanf("%d%d", &a, &b);

    while(a % b != 0)
    {
        ans = a % b;
        a = b;
        b = ans;
    }

    printf("%d", ans);

    return 0;
}