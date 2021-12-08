#include <stdio.h>      //printf()
#include <stdlib.h>     //system()作業系統

int main()
{
    printf("下面會秀出 system()函式的結果\n");

    system("ls");      //呼叫 system()函式

    printf("Hello World");  //呼叫printf()

    return 0;
}