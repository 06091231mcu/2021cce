#include <stdio.h>

void printStar(int n)
{//不送出來， 送入一個整數
    for(int i = 0; i < n; i++)
        printf("*");
}//因為void不送出，所以不用return

int main()
{
    printStar(7);   //在呼叫call函數之前要先定義好
}