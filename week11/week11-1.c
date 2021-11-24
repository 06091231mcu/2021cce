#include <stdio.h>

int arr[10000000] = {};

int main()
{
    int num;
    scanf("%d", &num);

    for(int i = 2; i < num; i++)
    {
        if(arr[i] == 0)
        {
            printf("%d ", i);
            for(int j = i+i; j < num; j += i)
                arr[j] = 1;
        }   
    }

    return 0;
}