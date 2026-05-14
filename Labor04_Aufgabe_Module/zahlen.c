#include "zahlen.h"  // Bindet das eigene Inhaltsverzeichnis ein
#include <stdio.h>

#define MAX_NUMBERS 10

// Globale Variablen - durch "static" nur innerhalb dieser datei sichtbar!
static int numbers[MAX_NUMBERS];
static int count = 0;

// Funktion zum Hinzufügen einer Zahl
void add_number()
{
    if (count >= MAX_NUMBERS)
    {
        printf("Array ist voll!\n");
        return;
    }

    printf("Zahl eingeben: ");
    scanf("%d", &numbers[count]);
    printf("%d ", numbers[count]);
    count++;
}

// Funktion zum Anzeigen aller Zahlen
void print_numbers()
{
    printf("\nAlle Zahlen: \n");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");
}

// Funktion zum Berechnen des Durchschnitts
float calculate_average()
{
    if (count == 0)
        return 0.0;
    int sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum += numbers[i];
    }
    return (float)sum / count;
}

// Funktion zum Finden der größten Zahl
int find_max()
{
    if (count == 0)
        return 0;
    int max = numbers[0];
    for (int i = 1; i < count; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
    }
    return max;
}
