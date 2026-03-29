/*Eingabe:

43707 52445
Erwartete Ausgabe:

1. Zahl: 0xaabb
2. Zahl: 0xCCDD*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int zahl1, zahl2;
int main()
{
    scanf("%i %i", &zahl1, &zahl2);
    printf("1. Zahl: 0x%x\n", zahl1);
    // printf("1. Zahl: %#x\n", zahl1);
    printf("2. Zahl: 0x%X\n", zahl2);
    return 0;
}