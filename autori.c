#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    scanf("%s", str);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
            printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}