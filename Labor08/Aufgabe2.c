#include <stdio.h>

double potenz_rekursiv(double basis, int n)
{
    if (n == 0)
    {
        return 1;  // basisfall
    }
    else
    {
        return basis * potenz_rekursiv(basis, n - 1);  // rekursiv
    }
}

int main(int argc, char* argv[])
{
    double a, b;
    int n;
    scanf("%lf %lf %d", &a, &b, &n);
    double basis = a + b;
    printf("%lf\n", potenz_rekursiv(basis, n));

    return 0;
}