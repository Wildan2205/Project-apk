#include <stdio.h>

int main() {
    char nama[50];
    int pilihan;
    int angka1, angka2;
    float hasil;

    printf("=== PEMBELAJARAN MATEMATIKA ===\n");
    printf("Quiz Matematika\n\n");

    printf("Masukkan nama: ");
    scanf("%49s", nama);

    printf("\nHalo, %s\n", nama);
    printf("Pilih soal:\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("5. Modulus\n");

    printf("Pilihan: ");
    scanf("%d", &pilihan);

    printf("Masukkan angka pertama: \n");
    scanf("%d", &angka1);
    printf("Masukkan angka kedua: \n");
    scanf("%d", &angka2);

    if (pilihan == 1) {
        hasil = angka1 + angka2;
        printf("Hasil penjumlahan = %.0f\n", hasil);

    } else if (pilihan == 2) {
        hasil = angka1 - angka2;
        printf("Hasil pengurangan = %.0f\n", hasil);

    } else if (pilihan == 3) {
        hasil = angka1 * angka2;
        printf("Hasil perkalian = %.0f\n", hasil);

    } else if (pilihan == 4) {
        if (angka2 == 0) {
            printf("Error! Tidak bisa dibagi dengan 0\n");
        } else {
            hasil = (float)angka1 / angka2;
            if ((angka1 % angka2) == 0) {
                printf("Hasil pembagian = %.0f (habis dibagi)\n", hasil);
            } else {
                printf("Hasil pembagian = %.2f\n", hasil);
            }
        }

    } else if (pilihan == 5) {
        if (angka2 == 0) {
            printf("Error! Tidak bisa modulus 0\n");
        } else {
            printf("Sisa pembagian = %d\n", angka1 % angka2);
        }

    } else {
        printf("Pilihan tidak tersedia.\n");
    }

    return 0;
}
