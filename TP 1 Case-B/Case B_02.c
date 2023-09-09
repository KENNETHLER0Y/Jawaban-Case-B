// 2702385873 KENNETH LEROY
// kenneth.leroy@binus.ac.id

#include <stdio.h>

int main() {
    int count = 0;
    double totalDiskonTransaksi = 0;
    char lanjut;
    int lanjutBelanja = 1;
    
    printf("======================================================\n");
    printf("\tPROGRAM UNTUK MENGHITUNG TOTAL BELANJA\n");
    printf("======================================================\n");
    
    while (lanjutBelanja) {  // Penggunaan looping untuk mengatur dan mengontrol berjalannya proses belanja
        int belanja = 0;
        double totalDiskonBelanja = 0;
        
        do {
            printf("Masukkan harga jual / Subtotal (rupiah)\t: ");
            
            // Periksa apakah input adalah bilangan bulat yang valid dan tampilkan pesan peringatan sekali jika invalid
            if (scanf("%d", &belanja) != 1 || belanja <= 0) {
                printf("Masukkan tidak valid. Harap masukkan jumlah belanja yang benar.\n");
                while ((getchar()) != '\n');
            } else {
                // Hitung diskon berdasarkan jumlah belanja dalam satu sesi atau pada sesi tersebut
                if (belanja >= 200000 && belanja < 500000) {
                    totalDiskonBelanja = belanja * 0.10;
                } else if (belanja >= 500000 && belanja < 1000000) {
                    totalDiskonBelanja = belanja * 0.20;
                } else if (belanja >= 1000000) {
                    totalDiskonBelanja = belanja * 0.30;
                } else {
    				totalDiskonBelanja = 0;
                }
                
                // Tambahkan angka transaksi pada setiap sesi
                count++;
                
                // Periksa jika transaksi ke-4 telah dilakukan
                if (count % 4 == 0) {
                    totalDiskonBelanja += belanja * 0.20;  // Terapkan diskon tambahan untuk pembelian atau transaksi ke-4 sebesar 20%
                }
                
                // Akumulasi total diskon untuk seluruh transaksi
                totalDiskonTransaksi += totalDiskonBelanja;
                
                // Print hasil transaksi
                double jumlahBayar = belanja - totalDiskonBelanja;
                printf("Selamat! Anda mendapat diskon sebesar\t: %.2lf%%\n", totalDiskonBelanja / belanja * 100);
                printf("Potongan harga yang diperoleh\t\t: %.2lf\n", totalDiskonBelanja);
                printf("Jumlah yang harus dibayar / Total\t: %.2lf\n", jumlahBayar);
                printf("\n");
                printf("Transaksi pembelian yang sudah dilakukan: %d\n", count);
                
                // Tanyakan apakah pembeli ingin berbelanja lagi
                printf("\n");
                printf("-----------------------------------------------------\n");
                do {
                    printf("Apakah anda ingin berbelanja lagi? (Y/N): ");
                    scanf(" %c", &lanjut);
                printf("-----------------------------------------------------\n");
                printf("\n");
                    
                    // Periksa apakah input yang dimasukkan valid dan tampilkan pesan peringatan sekali jika invalid
                    if (lanjut != 'Y' && lanjut != 'y' && lanjut != 'N' && lanjut != 'n') {
                        printf("Masukkan tidak valid. Harap masukkan 'Y' atau 'N'.\n");
                        while ((getchar()) != '\n');
                    }
                } while (lanjut != 'Y' && lanjut != 'y' && lanjut != 'N' && lanjut != 'n');
                
                if (lanjut == 'N' || lanjut == 'n') {
                    lanjutBelanja = 0;  // Untuk menghentikan proses belanja
                }
            }
        } while (lanjut == 'Y' || lanjut == 'y'); // Untuk melanjutkan proses belanja
    }
    
    printf("=====================================================\n");
    printf("\tTERIMA KASIH, SELAMAT BELANJA KEMBALI\n");
    printf("=====================================================\n");

    return 0;
}

