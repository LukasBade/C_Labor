#include "zahlen.h"
#include <stdio.h>

int main()
{
    int choice;
    do
    {
        printf("\n1. Zahl hinzufügen\n");
        printf("2. Alle Zahlen anzeigen\n");
        printf("3. Durchschnitt berechnen\n");
        printf("4. Größte Zahl finden\n");
        printf("5. Beenden\n");
        printf("Wahl: ");
        scanf("%d", &choice);
        printf("%d ", choice);
        switch (choice)
        {
        case 1:
            add_number();
            break;
        case 2:
            print_numbers();
            break;
        case 3:
            printf("Durchschnitt: %.2f\n", calculate_average());
            break;
        case 4:
            printf("Größte Zahl: %d\n", find_max());
            break;
        case 5:
            printf("Programm wird beendet.\n");
            break;
        default:
            printf("Ungültige Eingabe!\n");
        }
    } while (choice != 5);

    return 0;
}