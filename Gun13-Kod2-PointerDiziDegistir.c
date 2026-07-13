// Gun13-Kod2-PointerDiziDegistir.c
//
// SENARYO:
// Bir elektronik harp sisteminde, düşman radarlarının
// sinyal güçleri ölçülüyor. Sistem zayıf sinyalleri
// (60 dBm altı) tespit edip bunları 0 yapıyor —
// bu sinyaller artık tehdit oluşturmuyor demek.
// İşlemi pointer ile yapıyoruz çünkü dizinin
// orijinal değerlerini değiştirmemiz gerekiyor.
//
// YENİ KONU: POİNTER İLE DİZİ ELEMANLARINI DEĞİŞTİRMEK
// Pointer ile dizinin orijinal değerlerini
// doğrudan değiştirebiliriz. Kopyalamaya gerek yok.
//
// ALGORİTMA:
// 1. Düşman radarlarının sinyal güçlerini diziye koy
// 2. Pointer ile diziyi tara
// 3. 60 dBm altındaki sinyalleri 0 yap — tehdit değil
// 4. Güncellenmiş listeyi ekrana yazdır

#include <stdio.h>

int main() {
    // Düşman radarlarının sinyal güçleri (dBm)
    int radar_sinyalleri[6] = {85, 45, 92, 30, 78, 55};

    int *ptr = radar_sinyalleri; // Pointer dizinin başını gösteriyor
    int i;

    printf("=== ELEKTRONİK HARP SİSTEMİ ===\n\n");

    // Önce mevcut durumu yazdır
    printf("Tespit edilen radarlar:\n");
    for (i = 0; i < 6; i++) {
        printf("Radar %d: %d dBm\n", i+1, *(ptr + i));
    }

    printf("\nZayıf sinyaller etkisiz hale getiriliyor...\n\n");

    // Pointer ile diziyi tara, zayıf sinyalleri 0 yap
    for (i = 0; i < 6; i++) {
        if (*(ptr + i) < 60) {       // Sinyal 60 dBm altındaysa
            *(ptr + i) = 0;          // O adresi 0 yap — etkisiz
        }
    }

    // Güncellenmiş durumu yazdır
    printf("Güncellenmiş radar listesi:\n");
    for (i = 0; i < 6; i++) {
        if (*(ptr + i) == 0) {
            printf("Radar %d: ETKİSİZ\n", i+1);
        } else {
            printf("Radar %d: %d dBm - AKTİF TEHDİT\n", i+1, *(ptr + i));
        }
    }

    return 0; // Program hatasız bitti
}
