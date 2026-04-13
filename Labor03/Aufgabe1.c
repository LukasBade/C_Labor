#include <stdio.h>

int main()
{
    unsigned int counter = 0;
    for (;;)
    {
        counter++;
    }
    // Durch Endlosschleife wird der untere Teil nie ausgeführt, Programm muss terminiert werden
    printf("result: %d\n", counter);
    return 0;
}