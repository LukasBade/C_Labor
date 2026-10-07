#include <stdio.h>

double berechne_reihe(double a, double x, int n)
{
    if (n <= 0)
    {
        return 0.0;
    }

    return (a + 2 * n * x) + berechne_reihe(a, x, n - 1);
}

int main(int argc, char* argv[])
{
    double a, x;
    int N;

    if (scanf("%lf %lf %d", &a, &x, &N) == 3)
    {

        double y = berechne_reihe(a, x, N);

        printf("%.1f\n", y);
    }

    return 0;
}
