//Selection Sort 選擇排序法
//原則：舞台上要留最小的（選出最小的）

#include <stdio.h>

int a[10] = {3, 0, 1, 8, 7, 2, 5, 4, 6, 9};

int main()
{
    for(int i = 0; i < 10; i++)
        for(int j = i+1; j < 10; j++)
            //左手i，右手j（希望小到大）
            if(a[i] > a[j])
            {
                //如果反過來
                int temp = a[i];//交換
                a[i] = a[j];
                a[j] = temp;
            }
            
    for(int i = 0; i < 10; i++)
        printf("%d", a[i]);
    printf("\n");
}