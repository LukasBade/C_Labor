#include <stdio.h>

int main()
{
    int n;
    printf("Anzahl: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            printf("_");
        else
            printf("*");
    }
    printf("\n");

    return 0;
}