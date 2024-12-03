#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void clearScreen() {
    system("cls || clear");
}

void energiPotensial() {
    clearScreen();
    puts("=== Energi Potensial ===");
    double massa, gravitasi, tinggi, energiPotensial;
    printf("Masukkan massa (kg): ");
    scanf("%lf", &massa); getchar();
    printf("Masukkan gravitasi (m/s^2): ");
    scanf("%lf", &gravitasi); getchar();
    printf("Masukkan tinggi (m): ");
    scanf("%lf", &tinggi); getchar();
    energiPotensial = massa * gravitasi * tinggi;
    printf("Energi Potensial: %.2f Joule.\n", energiPotensial);
    puts("Tekan ENTER untuk kembali ke menu."); 
    getchar();
    clearScreen();
}

void energiKinetik() {
    clearScreen();
    puts("=== Energi Kinetik ===");
    double massa, kecepatan, energiKinetik;
    printf("Masukkan massa (kg): ");
    scanf("%lf", &massa); getchar();
    printf("Masukkan kecepatan (m/s): ");
    scanf("%lf", &kecepatan); getchar();
    energiKinetik = 0.5 * massa * kecepatan * kecepatan;
    printf("Energi Kinetik: %.2f Joule.\n", energiKinetik);
    puts("Tekan ENTER untuk kembali ke menu.");
    getchar();
    clearScreen();
}

void energiMekanik() {
    clearScreen();
    int pilihan;
    puts("=== Energi Mekanik ===");
    puts("1. EK + EP");
    puts("2. m.g.h + 1/2m.v^2");
    printf("Pilih format perhitungan: ");
    scanf("%d", &pilihan); getchar();

    switch(pilihan) {
        case 1: 
            clearScreen();
            double energiKinetik, energiPotensial, energiMekanik;
            puts("=== Energi Mekanik ===");
            printf("Masukkan Energi Kinetik (J): ");
            scanf("%lf", &energiKinetik); getchar();
            printf("Masukkan Energi Potensial (J): ");
            scanf("%lf", &energiPotensial); getchar();
            energiMekanik = energiKinetik + energiPotensial;
            printf("Energi Mekanik: %.2f Joule.\n", energiMekanik);
            puts("Tekan ENTER untuk kembali ke menu.");
            getchar(); break;

        case 2:
            clearScreen();
            double massa1, gravitasi, tinggi;
            double massa2, kecepatan;
            puts("=== Energi Mekanik ===");
            printf("Masukkan massa (kg): ");
            scanf("%lf", &massa1);
            printf("Masukkan gravitasi (m/s^2): ");
            scanf("%lf", &gravitasi);
            printf("Masukkan tinggi (m): ");
            scanf("%lf", &tinggi);
            energiPotensial = massa1 * gravitasi * tinggi;
            printf("Energi Potensial: %.2f Joule.", energiPotensial); 
            clearScreen();
            
            puts("=== Energi Mekanik ===");
            printf("Energi Potensial: %.2f Joule\n", energiPotensial);
            printf("Masukkan massa (kg): ");
            scanf("%lf", &massa2);
            printf("Masukkan kecepatan (m/s): ");
            scanf("%lf", &kecepatan);
            energiKinetik = 0.5 * massa2 * kecepatan * kecepatan;
            printf("Energi Kinetik: %.2f Joule.\n", energiKinetik);
            energiMekanik = energiKinetik + energiPotensial;
            clearScreen();
            puts("=== Energi Mekanik ===");
            printf("Energi Potensial: %.2f Joule.\n", energiPotensial);
            printf("Energi Kinetik: %.2f Joule.\n", energiKinetik);
            printf("Energi Mekanik: %.2f Joule.\n", energiMekanik);
            puts("Tekan ENTER untuk kembali ke menu.\n");
            getchar(); getchar(); break;
        
        default:
            printf("Pilihan tidak valid. Silahkan masukkan angka 1 atau 2.\n >>");
            getchar();
    }
}

void keluar() {
    printf("Terima Kasih! Program berakhir.\n");
    Sleep(1500);
    exit(0);
}

int main() {
    clearScreen();
    int pilihan;
    do {
        puts("=== Kalkulator Energi ===");
        puts("=========================");
        puts("1. Energi Potensial");
        puts("2. Energi Kinetik");
        puts("3. Energi Mekanik");
        puts("4. Keluar");
        printf("Masukkan pilihan anda: ");
        scanf("%d", &pilihan); getchar();
        switch(pilihan) {
            case 1:
                energiPotensial();
                break;
            case 2:
                energiKinetik();
                break;
            case 3:
                energiMekanik();
                break;
            case 4:
                keluar();
                break;
            default:
                printf("Pilihan tidak valid. silahkan pilih angka 1-4.\n");
                clearScreen();
                break;
        } 
    } while(pilihan != 4);

    return 0;
}
