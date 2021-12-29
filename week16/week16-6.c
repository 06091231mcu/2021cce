#include <stdio.h>
#include <string.h>

char line[3000];

int main()
{
    scanf("%s", line);
    int n = strlen(line), ans = 1;

    for(int i = 0; i < n/2; i++)
        if(line[i] != line[n-1-i])
            ans = 0;
    
    if(ans)
        printf("Yes");
    else
        printf("No");
}