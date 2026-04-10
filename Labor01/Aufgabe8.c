/*Deklarieren Sie vier Variablen der in passenden ganzzahligen(!) Datentypen und geben Sie deren belegte Speichergröße aus. Die Speichergröße soll zur Programmlaufzeit ermittelt werden.*/

#include <stdint.h>
#include <stdio.h>
int main()
{
    // Variablen vom passenden Datentyp anlegen
    int8_t variable8;    // 8 bit Variable
    int16_t variable16;  // 16 Bit Variable
    int32_t variable32;  // 32 Bit Variable
    int64_t variable64;  // 64 Bit Variable
                         // Nicht intx (wegen library) sondern die Datentypentabelle aus der Vorlesung! char, long long usw.
    // Belegten Speicher ausgeben
    printf("Belegter Speicher: %zu Bytes\n", sizeof(variable8));
    printf("Belegter Speicher: %zu Bytes\n", sizeof(variable16));
    printf("Belegter Speicher: %zu Bytes\n", sizeof(variable32));
    printf("Belegter Speicher: %zu Bytes\n", sizeof(variable64));
    // printf("Datentyp int8_t hat %zu Byte und %zu Bit als Speichergröße.\n", sizeof(variable8), sizeof(variable8)*8);
    // printf("Datentyp int16_t hat %zu Byte und %zu Bit als Speichergröße.\n", sizeof(variable16), sizeof(variable16)*8);
    // printf("Datentyp int32_t hat %zu Byte und %zu Bit als Speichergröße.\n", sizeof(variable32), sizeof(variable32)*8);
    // printf("Datentyp int64_t hat %zu Byte und %zu Bit als Speichergröße.\n", sizeof(variable64), sizeof(variable64)*8);
    return 0;
}
