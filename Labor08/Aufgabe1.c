#include <stdio.h>

double potenz(double a, double b, int n)
{
    double basis = a + b;
    double ergebnis = 1;  // wieso geht nicht 0? -> Startwert bei erster Iteration

    for (int i = 0; i < n; i++)
    {
        ergebnis *= basis;
    }

    return ergebnis;
}

int main(int argc, char* argv[])
{
    double a, b;
    int n;
    scanf("%lf %lf %d", &a, &b, &n);
    printf("%lf\n", potenz(a, b, n));

    return 0;
}