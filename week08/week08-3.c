#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    for(int i = 2; i <= num; i++)
    {
        int isPrime = 1;
        for(int j = 2; j < i; j++)
            if(i % j == 0)  isPrime = 0;
        
        if(isPrime) printf("%d", i);
    }

    return 0;
}
//老師教的

/*
int main()
{
    int num;
    scanf("%d", &num);

    for(int i = 2; i <= num; i++)
    {
        for(int j = 2; j < i && i % j != 0; j++);
        if(i == j)  printf("%d", i);
    }

    return 0;
}
*/
//助教教的