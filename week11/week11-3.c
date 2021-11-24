//bubble sort
#include <stdio.h>

//int arr[10] = {4, 5, 6, 1, 2, 3, 7, 8, 9, 0};   //(1) array
//int arr[10] = {0, 3, 2, 1, 4, 5, 6, 7, 8, 9};   //better example
int arr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};   //worst situation

int main()
{
    for(int i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    printf("\n");                               //print array
    
    for(int j = 0; j < 9; j++)
        for(int i = 0; i < 10-1; i++)//how loop run
            if(arr[i] > arr[i+1])//(2) if left bigger than right, switch
            {
                int temp = arr[i];//(3) switch
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }

    for(int i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    printf("\n");
}