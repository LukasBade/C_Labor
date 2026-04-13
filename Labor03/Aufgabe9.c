#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int row, col;

int main(int argc, char* argv[])
{
    scanf("%i %i", &row, &col);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == 0 || i == row - 1)  // || = OR
                printf("*");

            else if (j == 0 || j == col - 1)
                printf("*");

            else
                printf(" ");
        }

        printf("\n");
    }
    return 0;
}
