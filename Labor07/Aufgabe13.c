#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char* argv[])
{

    int array[4];
    int summe = 0;

    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int j = 0; j < 4; j++)
    {
        summe += array[j];
    }

    float average = (float)summe / 4;

    printf("Summe: %d\n", summe);
    printf("Durchschnitt: %f\n", average);

    return 0;
}