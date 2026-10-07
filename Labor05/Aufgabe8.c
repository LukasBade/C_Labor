#include <stdio.h>

int einlesen(float noten[])
{
    int n = 0;
    float x;

    while (n < 10)
    {
        if (scanf("%f", &x) != 1)
        {
            break;
        }

        if (x < 1.0 || x > 6.0)
        {
            break;
        }

        noten[n] = x;
        n++;
    }

    return n;
}

float berechnen(float noten[], int n)
{
    float sum = 0.0;

    for (int i = 0; i < n; i++)
    {
        sum += noten[i];
    }

    return sum / n;
}

void ausgeben(float avg, int n)
{
    printf("Durchschnitt (N=%d): %.2f\n", n, avg);
}

int main()
{
    float noten[10];

    int n = einlesen(noten);
    float avg = berechnen(noten, n);
    ausgeben(avg, n);

    return 0;
}