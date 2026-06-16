#include <stdio.h>

int main(int argc, char* argv[])
{
    double a, x;
    int N;

    // Einlesen der Parameter ohne vorherigen Text (wichtig fürs Testsystem!)
    if (scanf("%lf %lf %d", &a, &x, &N) != 3)
    {
        return 1;
    }

    double y = 0.0;

    // Iterative Berechnung der Reihe von i = 1 bis i = N
    for (int i = 1; i <= N; i++)
    {
        y += (a + 2.0 * i * x);
    }

    // Ausgabe des Ergebnisses mit einer Nachkommastelle
    printf("%.1lf\n", y);

    return 0;
}
