#include <stdio.h>

int main()
{
    int num, isPrime = 1;
    scanf("%d", &num);

    for(int i = 2; i < num; i++)
        if (num % i == 0)
            isPrime = 0;
    
    if(isPrime)
        printf("%d是質數", num);
    else
        printf("%d不是質數", num);

    return 0;        
}