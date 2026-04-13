#include <stdio.h>

int main()
{
    int n;
    // printf("Anzahl: ");
    scanf("%i", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)  // Modulo für die Identifikation von ungeraden oder geraden Zahlen der Iteration
            printf("_");
        else
            printf("*");
    }
    printf("\n");

    return 0;
}