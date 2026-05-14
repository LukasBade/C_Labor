#include <stdio.h>

double basis = 0.0;
int exponent = 0.0;
double ergebnis = 0.0;

int main()
{
    // Eingabe
    printf("Bitte basis eingeben: ");
    scanf("%lf", &basis);
    printf("Bitte exponent eingeben: ");
    scanf("%d", &exponent);

    // Berechnung
    ergebnis = 1.0;
    int i = 0;
    for (i = 0; i < exponent; i++)
    {
        ergebnis *= basis;
    }

    // Ausgabe2
    printf("%.1lf ^ %d = %.1lf", basis, exponent, ergebnis);

    return 0;
}