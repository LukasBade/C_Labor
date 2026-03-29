/*Eingabe:

5454698 35460.545 x
Erwartete Ausgabe:

Ganzzahlen    : 0005454698
Gleitkommazahl: 35460.54688
Zeichen       : x*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int ganzzahl;
float gleitkommazahl;
char zeichen;
int main()
{
    scanf("%d", &ganzzahl);
    scanf("%f", &gleitkommazahl);
    scanf(" %c", &zeichen);
    // Eingabe
    printf("Ganzzahlen    : %010d\n", ganzzahl);
    printf("Gleitkommazahl: %.5f\n", gleitkommazahl);
    printf("Zeichen       : %c\n", zeichen);
    // Ausgabe
    return 0;
}