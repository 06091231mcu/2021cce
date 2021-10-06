#include <stdio.h>

int main()
{
    float pi = 3.14159265358979;
    double pi2 = 3.14159265358979;

    printf("%f\n", pi);
    printf("%f\n", pi2);
    
    printf("%.8f\n", pi2);
    printf("%.12f\n", pi2);
    printf("%9.5f\n", pi2);
}
