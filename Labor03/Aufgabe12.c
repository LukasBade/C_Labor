/*GradCelsius = 5*(Fahrenheit-32) / 9*/

#include <stdio.h>

int main(int argc, char* argv[])
{
    printf("Fahrenheit      Celsius\n");

    for (float i = -20; i < 301; i += 20)
    {
        float celsius = 5 * (i - 32) / 9;
        printf("%10.0f%13.2f\n", i, celsius);  // beachtet die 11 auch die vorangehenden 7 Zeichen? sonst 17?
    }
    return 0;
}