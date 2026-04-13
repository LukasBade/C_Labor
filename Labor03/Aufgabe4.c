#include <stdio.h>

int main()
{
    int counter = 0;
    int i = 0;
    while (1)
    {
        if (i == 4)
        {
            break;
        }
        counter += i;
        i++;
    }
    printf("result: %d\n", counter);
    // counter = counter + i (3 before break, i++ also erst nach nächster Iteration 4)
    // break skips the counter += step
    return 0;
}