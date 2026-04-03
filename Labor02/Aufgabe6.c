/*Dieses Mal soll aber eine Bewertung als Text ausgegeben werden:

BMI	Ausgabe
bmi < 18.5	Untergewicht bmi-Wert
18.5 <= bmi <= 24.9	Normalgewicht bmi-Wert
bmi > 24.9	Uebergewicht bmi-Wert

Bei den Werten von oben sollte die Ausgabe

Normalgewicht 24.3

ergeben*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int Gewicht, Groeße;
    double bmi_value;

    // printf("Eingabe in Gramm: ");
    scanf("%i", &Gewicht);
    // printf("Eingabe in Zentimeter: ");
    scanf("%i", &Groeße);

    float kg = Gewicht / 1000.0f;
    float m = Groeße / 100.0f;

    bmi_value = kg / (m * m);
    // printf("Der BMI liegt bei: %.2f!\n", bmi_value);

    if (bmi_value < 18.5)
        printf("Untergewicht %.1f", bmi_value);

    if (bmi_value >= 18.5 && bmi_value <= 24.9)
        printf("Normalgewicht %.1f", bmi_value);

    if (bmi_value > 24.9)
        printf("Uebergewicht %.1f", bmi_value);

    /*if (bmi_value < 18.5)
    printf("Untergewicht %.1f", bmi_value);
    else if (bmi_value <= 24.9)
    printf("Normalgewicht %.1f", bmi_value);
    else
    printf("Uebergewicht %.1f", bmi_value);*/
    return 0;
}