#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int row, col;

int main()
{
    scanf("%i, %i", &row, &col);

    for (int i = 0; i < row; i++)
    {
        for (int j; j < col; j++)
        {
            printf("*");
        }

        printf("*");
    }
    return 0;
}
