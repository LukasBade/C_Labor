#include <stdio.h>

char getFirstCapitalLetter(const char* str)
{

    if (str[0] == '\0')
    {
        return ' ';
    }

    if (str[0] >= 'A' && str[0] <= 'Z')
    {
        return str[0];
    }

    return getFirstCapitalLetter(str + 1);
}

int main(int argc, char* argv[])
{
    if (argc > 1)
    {
        printf("%c\n", getFirstCapitalLetter(argv[1]));
    }
    else
    {
        char input[256];
        if (scanf("%255s", input) == 1)
        {
            printf("%c\n", getFirstCapitalLetter(input));
        }
    }
    return 0;
}