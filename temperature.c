#include <stdio.h>

int main() {
    float temperature, converted;
    char unit;

    printf("Entrez la température suivie de son unité (C pour Celsius, F pour Fahrenheit) : ");
    scanf("%f %c", &temperature, &unit);

    if (unit == 'C' || unit == 'c') {
        // Conversion de Celsius à Fahrenheit
        converted = (temperature * 9 / 5) + 32;
        printf("%.2f°C correspond à %.2f°F\n", temperature, converted);
    } else if (unit == 'F' || unit == 'f') {
        // Conversion de Fahrenheit à Celsius
        converted = (temperature - 32) * 5 / 9;
        printf("%.2f°F correspond à %.2f°C\n", temperature, converted);
    } else {
        printf("Unité invalide. Veuillez entrer 'C' pour Celsius ou 'F' pour Fahrenheit.\n");
    }

    return 0;
}