#include <stdio.h>

int arr[10000000] = {};

int main()
{
    int num, ans = 0;
    scanf("%d", &num);

    for(int i = 2; ans < num; i++)
    {
        if(arr[i] == 0)
        {
            ans++;
            printf("%d ", i);
            for(int j = i+i; j < 10000000; j += i)
                arr[j] = 1;
        }   
    }

    return 0;
}