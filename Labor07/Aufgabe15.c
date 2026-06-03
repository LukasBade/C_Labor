#include <stdio.h>

int main(int argc, char* argv[])
{

    int i;
    int* ptr = &i;
    int** ptrptr = &ptr;

    i = 1;

    printf("%d\n", i);
    printf("%d\n", *ptr);

    **ptrptr = 2;
    printf("%d\n", **ptrptr);

    return 0;
}
