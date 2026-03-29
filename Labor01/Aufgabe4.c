/*String: Das ist eine Zeichenkette
Ganze Zahl: 42
Fliesskommazahl: 3.141500
Fliesskommazahl mit Formatangabe: 00003.14 */

#include <stdio.h>
int main()
{
    printf("String: %s \n", "Das ist eine Zeichenkette");
    printf("Ganze Zahl: %i \n", 42);
    printf("Fliesskommazahl: %f \n", 3.1415);
    printf("Fliesskommazahl mit Formatangabe: %08.2f \n", 3.1415);
    return 0;
}