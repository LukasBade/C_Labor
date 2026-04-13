#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;
    scanf("%i", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)  // immer ein quadrat mit beiden Seiten gleich lang
        {
            if (i == 0 || i == n - 1)  // Rand oben
                printf("*");

            else if (j == 0 || j == n - 1)  // Rand links rechts
                printf("*");

            else if (i == j)  // diagonale
                printf("*");

            else if (i + j == n - 1)  // diagonale
                printf("*");

            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}