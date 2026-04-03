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
    return 0;
}