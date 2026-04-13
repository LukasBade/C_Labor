#include <stdio.h>

int main()
{
    int n;
    printf("Anzahl der Sterne: ");
    scanf("%i", &n);

    for (int i = 0; i < n; i++)
    {
        printf("*");
    }
    printf("\n");

    return 0;
}