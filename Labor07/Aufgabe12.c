#include <stdio.h>

int main(int argc, char* argv[])
{

    char array[40];
    //int *pointer = (int*)array[0];


    for (int i = 0; i < 40; i++)
    {
        scanf("%c", &array[i]);
    }

    for (int i = 0; i < 40; i++)
    {
        printf("%c ", array[i]);
    }

    return 0;
}
