#include <stdio.h>

int main()
{
    int a = 100, b = 200, c;

    printf("a:%d b:%d c:%d\n", a, b, c);

    int d[3] = {100, 200, 300};
    for (int i = 0; i < 3; i++)
        printf("d[%d]:%d\n", i, d[0]);

    return 0;
}
