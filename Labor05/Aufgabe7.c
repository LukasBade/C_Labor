#include <stdio.h>

int main()
{
    char s[41];
    int len = 0;

    scanf("%40s", s);

    // Länge bestimmen
    while (s[len] != '\0')
    {
        len++;
    }

    // rückwärts ausgeben
    for (int i = len - 1; i >= 0; i--)
    {
        printf("%c", s[i]);
    }

    printf("\n");

    return 0;
}