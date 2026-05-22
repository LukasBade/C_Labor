#include <stdio.h>

int main()
{
    char s[41];
    int count = 0;

    scanf("%40s", s);

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 97 && s[i] <= 122)
        {  // 97 <= s[i] <= 122 ASCII
            count++;
        }
    }

    printf("%d Kleinbuchstaben\n", count);

    return 0;
}