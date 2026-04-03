/*Bei der Eingabe von 20.5 Grad Fahrenheit soll
Eingabe:
20.5
Folgende Ausgabe erscheinen:
20.5 Grad Fahrenheit = -6.4 Grad Celsius */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
float fahrenheit, celsius;

int main()
{
    scanf("%f", &fahrenheit);
    celsius = (5 * (fahrenheit - 32)) / 9.0f;
    printf("%.1f Grad Fahrenheit = %.1f Grad Celsius", fahrenheit, celsius);
    return 0;
}