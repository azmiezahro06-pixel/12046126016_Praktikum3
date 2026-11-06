/*
 * Program      : Sistem ATM Sederhana
 * Nama         : Azmie Sakinatu Zahro
 * NIM          : 12046126016
 * Deskripsi    : if-else + switch-case + nested if
 */
#include <stdio.h>

int main() {
    long nim;
    float nilai;
    char grade;
    char predikat[15];
    char status[15];

    printf("=== KONVERSI NILAI MAHASISWA SI ===\n");
    printf("Masukan NIM         : ");
    scanf("%ld", &nim);

    printf("Masukan Nilai Akhir (0-100): ");
    scanf("%f", &nilai);

    //Validasi rentang input
    if (nilai < 0 || nilai > 100){
        printf("\nERROR: Nilai harus di antara 0 - 100!\n");
        return 1;
    }

    // Klarifikasi grade
    if (nilai >= 85) {
        grade = 'A' ;
        sprintf(predikat, "Sangat Baik");
        sprintf(status, "LULUS");
    } else if (nilai >= 75) {
        grade = 'B' ;
        sprintf(predikat, "Baik");
        sprintf(status, "LULUS");
    }else if (nilai >= 65) {
        grade = 'C' ;
        sprintf(predikat, "Cukup");
        sprintf(status, "LULUS");
    }else if (nilai >= 50) {
        grade = 'D' ;
        sprintf(predikat, "Kurang");
        sprintf(status, "TIDAK LULUS");
    }else {
        grade = 'E';
        sprintf(predikat, "Sangat Kurang");
        sprintf(status, "TIDAK LULUS");
    }

    printf("\n=====================================\n");
    printf("=====================================\n");
    printf("===================================\n");
    printf("NIM         : %ld\n", nim);
    printf("Nilai       : %.2f\n", nilai);
    printf("Grade       : %c\n", grade);
    printf("Predikat    : %s\n", predikat);
    printf("Status      : %s\n", status);
    printf("===================================\n");

    return 0;
}