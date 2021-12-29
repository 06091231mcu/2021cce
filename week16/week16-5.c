#include <stdio.h>

char line[300] = "101010101010101010101010100101010100111010101011101";

int main()
{
    int ans = 0, i = 0;
    for(int i = 0; line[i] != '\0'; i++)
    // while(line[i] != '\0')
    // {
        if(line[i] == '1')
            ans++;
    //     i++;
    // }
    printf("有%d個1\n", ans);
}