#include <stdio.h>
/*
埃拉托斯特尼篩法（sieve of Eratosthenes）
https://zh.wikipedia.org/wiki/埃拉托斯特尼筛法
*/
int a[10000000] = { };   //0:safe, 1:kill   沒寫的會補0

int main()
{
    int ans = 0;

    for(int i = 2; i < 10000000; i++)
    {
        if(a[i] == 0)   //第i個數沒有被殺掉
        {
            ans++;  //找到一個王子i沒死
            for(int k = i+i; k < 10000000; k += i)  //找到國王i了！！把他的兄弟殺掉
                a[k] = 1;   //殺掉
        }
    }
    printf("Ans: %d ", ans);

    return 0;
}