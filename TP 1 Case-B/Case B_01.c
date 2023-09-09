// 2702385873 KENNETH LEROY
// kenneth.leroy@binus.ac.id

#include <stdio.h>

int main() {
    float x;

    printf("Masukkan jarak dalam kilometer (km): ");
    scanf("%f", &x);

    while (getchar() != '\n');

    printf("\nTekan Enter untuk mengonversi ke meter:\n");
    getchar(); // Wait for Enter key press

    float meter = x * 1000; // 1 km = 1000 m

    printf("%.2f kilometer = %.2f meter\n", x, meter);

    printf("\nTekan Enter untuk mengonversi ke centimeter:\n");
    getchar(); // Wait for Enter key press

    float centimeter = x * 100000; // 1 km = 100000 cm

    printf("%.2f kilometer = %.2f centimeter\n", x, centimeter);

    return 0;
}

