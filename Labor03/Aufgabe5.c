#include <stdio.h>

int main()
{
    int counter = 0;
    for (int i = 0; i < 10; i++)  // Iteration nach Ausführung
    {
        if (i % 2 == 0)  // Wenn I module-operator 0 ergibt, continue, somit werden nur ungerade Zahlen im Counter berücksichtigt
            continue;
        counter += i;
        // 1 + 3 + 5 + 7 + 9
    }
    printf("result: %d\n", counter);
    return 0;
}