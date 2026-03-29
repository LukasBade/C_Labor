/*Eingabe:
32 64 128
Erwartete Ausgabe:
Zahl 3:  128
Zahl 2:   64
Zahl 1:   32*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int num0, num1, num2;
int main()
{
    // printf("Eingabe der Zahlen:");
    scanf("%d", &num0);
    scanf("%d", &num1);
    scanf("%d", &num2);
    printf("Zahl 3: %4d\nZahl 2: %4d\nZahl 1: %4d\n", num2, num1, num0);
    // printf("Zahl 3: %4d \n", num2);
    // printf("Zahl 2: %4d \n", num1);
    // printf("Zahl 1: %4d \n", num0);
    return 0;
}
