/*Berechnen Sie den BMI für die eingegebenen Daten. Eingabe 1: Gewicht in Gramm Eingabe 2: Größe in Zentimeter

Hinweis: Körpergewicht (in kg) geteilt durch Größe (in m) zum Quadrat.

Beispielhafte Eingabe mit Gewicht in Gramm und Größe in Zentimeter:

85000 150
Erwartete Ausgabe

Der BMI liegt bei: 37.78!*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int Gewicht, Groeße;
    float bmi_value;
    scanf("Eingabe Gewicht in Gramm: %i", &Gewicht);
    scanf("Eingabe Größe in Zentimeter: %i", &Groeße);

    bmi_value = f((Gewicht / 100) / (Groeße / 100)) ^ 2;
    printf("Der BMI liegt bei: %.2f", bmi_value);
    return 0;
}