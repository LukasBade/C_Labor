#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char* argv[])
{

    int array[4];
    int* pointer = &array[2];

    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int j = 0; j < 4; j++)
    {
        printf("%d ", array[j]);
    }

    printf("\n");

    *pointer = 42;

    for (int h = 0; h < 4; h++)
    {
        printf("%d ", array[h]);
    }

    return 0;
}