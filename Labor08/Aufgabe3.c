#include <stdio.h>

int input()
{
    int n;
    if (scanf("%d", &n) != 1)
    {
        return -1;
    }
    return n;
}

long long faculty(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * faculty(n - 1);
}

int main(int argc, char* argv[])
{
    int n = input();

    if (n < 0)
    {
        printf("Ungültige Eingabe.\n");
        return 0;
    }

    long long ergebnis = faculty(n);

    printf("%d! = %lld\n", n, ergebnis);

    return 0;
}
