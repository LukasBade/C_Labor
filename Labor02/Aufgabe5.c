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

    printf("Eingabe in Gramm: ");
    scanf("%i", &Gewicht);
    printf("Eingabe in Zentimeter: ");
    scanf("%i", &Groeße);

    float kg = Gewicht / 1000.0f;
    float m = Groeße / 100.0f;

    bmi_value = kg / (m * m);
    printf("Der BMI liegt bei: %.2f !\n", bmi_value);
    return 0;
}