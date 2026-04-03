#include <stdio.h>

int main()
{
    int n;
    printf("Anzahl der Sterne: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("*");
    }
    printf("\n");

    return 0;
}