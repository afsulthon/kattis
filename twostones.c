#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    if (N % 2 == 0)
        printf("Bob\n");
    else
        printf("Alice\n");
    return 0;
}