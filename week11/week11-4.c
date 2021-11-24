#include <stdio.h>

int arr[100];

int main()
{
    for(int i = 0; i < 100; i++)
        scanf("%d", &arr[i]);

    for(int i = 0; i < 100-1; i++)
        for(int j = 0; j < 100-1; j++)
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }

    for(int i = 0; i < 100; i ++)
        printf("%d\n", arr[i]);

    return 0;
}