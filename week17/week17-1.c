#include <stdio.h>

int main()
{
    int n = 20030101;   //有個數字，每一位都拆出來
    //餘數 %10 得到個位數
    //除法 /10 得到2003010
    printf("%d => %d %d\n", n, n/10, n%10);

    n = n/10;   //變小
    printf("%d => %d %d\n", n, n/10, n%10);

    n = n/10;   //變小
    printf("%d => %d %d\n", n, n/10, n%10);

    n = n/10;   //變小
    printf("%d => %d %d\n", n, n/10, n%10);

    n = n/10;   //變小
    printf("%d => %d %d\n", n, n/10, n%10);
}