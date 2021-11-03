#include <stdio.h>

int main()
{
    int layer;
    scanf("%d", &layer);

    for(int i = 1; i <= layer; i++)
    {
        printf("%d: ", i);
        for(int j = 0; j < i; j++)
            printf(" ");
        for(int k = 0; k < layer; k++)
            printf("*");
        printf("\n");
    }

    return 0;
}