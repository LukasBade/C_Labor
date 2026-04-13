/*GradFahrenheit = (GradCelsius ∗ 9 /5) + 32*/

#include <stdio.h>

int main(int argc, char* argv[])
{
    printf("Celsius Fahrenheit\n");

    for (int i = -20; i < 301; i += 20)
    {
        int fahrenheit = i * 9 / 5 + 32;
        printf("%7i%11i\n", i, fahrenheit);  // beachtet die 11 auch die vorangehenden 7 Zeichen? sonst 17?
    }
    return 0;
}
