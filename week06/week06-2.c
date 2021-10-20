#include <stdio.h>

int main()
{
    int a = 999, b = 100, temp = 0;

    printf("a:%d b:%d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("a:%d b:%d\n", a, b);

    return 0;
}