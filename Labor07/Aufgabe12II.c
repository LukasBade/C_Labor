#include <stdio.h>

int main(void)
{
    char array[40];

    scanf("%39s", array);

    for (int i = 0; array[i] != '\0'; i++)
    {
        printf("%c ", array[i]);
    }

    return 0;
}