#include <stdio.h>

int isPrime(int n, int i)
{

    if (n <= 1)
    {
        return 0;
    }

    if (i * i > n)
    {
        return 1;
    }

    if (n % i == 0)
    {
        return 0;
    }

    return isPrime(n, i + 1);
}

int main(int argc, char* argv[])
{
    int input;

    if (scanf("%i", &input) == 1)
    {
        printf("%i\n", isPrime(input, 2));
    }

    return 0;
}