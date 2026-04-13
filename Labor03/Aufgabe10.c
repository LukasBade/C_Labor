#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int row, col;

int main()
{
    scanf("%i %i", &row, &col);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        // Build aus vorherigen Aufgaben
        {
            if ((i + j) % 2 == 0)  // Module, in der Iteration for j wird nur j iteriert, addition mit i erzeugt muster über die rows
                printf("+");
            else
                printf("-");
        }
        printf("\n");
    }
    return 0;
}