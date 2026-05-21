#include <stdio.h>

int main(int argc, char* argv[])
{

    double zahlen[4];

    for (int i = 0; i < 4; i++)
    {
        scanf("%lf", &zahlen[i]);
    }

    double kleinste = zahlen[0];
    int index = 0;

    for (int i = 1; i < 4; i++)
    {
        if (zahlen[i] < kleinste)
        {
            kleinste = zahlen[i];
            index = i;
        }
    }

    printf("Kleinste Zahl: %.1f an Index %d\n", kleinste, index);

    return 0;
}
