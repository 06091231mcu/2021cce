#include <stdio.h>

int main()
{
    int a, b, ans = 1;
    scanf("%d%d", &a, &b);

    if(a < 0)
        a = -a;
    if(b < 0)
        b = -b;

    for(int i = 1; i <= a; i++)
        if( a % i == 0 && b % i == 0)
            ans = i;
    
    printf("%d", ans);

    return 0;
}