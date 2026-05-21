#include <stdio.h>

int main()
{
    char s[41];
    int start, end;

    scanf("%40s %d %d", s, &start, &end);

    printf("%s %d-%d: ", s, start, end);

    for (int i = start; i <= end && s[i] != '\0'; i++)
    {
        printf("%c", s[i]);
    }

    printf("\n");

    return 0;
}