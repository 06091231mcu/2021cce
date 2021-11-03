#include <stdio.h>

int main()
{
    printf("1: *\n");
    printf("2: **\n");
    printf("3: ***\n");
    printf("4: ****\n");
    printf("5: *****\n");
    printf("6: ******\n");

    int layer = 6;
    //scanf("%d", &layer);

    for(int i = 1; i <= layer; i++)
    {
        printf("%d: ", i);
        for(int j = 0; j < i; j++)
            printf("*");
        printf("\n");
    }
    
    return 0;
}