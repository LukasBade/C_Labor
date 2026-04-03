/*Verwenden Sie die Formel von Widmark:

W = A / (m * r)

mit

Formelzeichen	Bedeutung
w	Blutalkoholkonzentration des Alkohols im Körper in Promille
A	die aufgenommene Masse des Alkohols in Gramm (g)
m	die Masse der Person in Kilogramm (kg)
r	der Reduktions- oder Verteilungsfaktor im Körper: Männer: 0,7; Frauen: 0,60; Säuglinge/Kleinkinder: 0,80
Um A zu berechnen, verwenden Sie:

A = V * e * phi

Formelzeichen	Bedeutung
V	Volumen des Getränks (ml), z.B. 500 ml
e	Alkoholanteil, z.B. 5 Prozent bei Bier
phi	Dichte des Alkohols, hier 0,8 g/ml
Zum Beispiel werden folgende Daten eingegeben:

m 80 500 5
Ein Mann (m; alternativ w für weiblich oder k für Kind) mit einem Gewicht von 80 kg trinkt ein Bier mit 5 Prozent Alkoholgehalt.

Als Ergebnis soll dann

0.36 Promille
ausgegeben werden.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define phi 0.8f

float W, A, V, m, g;
int e;
char ge;

int main()
{
    scanf("%c %f %f %i", &ge, &m, &V, &e);
    if (ge == 'm')
        g = 0.7f;
    else if (ge == 'f' || ge == 'w')
        g = 0.6f;
    else if (ge == 'k')
        g = 0.8f;

    A = V * (e / 100.0f) * phi;
    W = A / (m * g);

    printf("%.2f Promille", W);
    return 0;
}