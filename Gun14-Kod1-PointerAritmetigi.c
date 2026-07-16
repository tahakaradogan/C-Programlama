// Gun14-Kod1-PointerAritmetigi.c
//
// SENARYO:
// Bir füze savunma sisteminde, radardan gelen hedef mesafe verileri sırayla bellekte tutuluyor.
// Pointer aritmetiği kullanarak bu verileri sırayla okuyoruz. Pointer'ı ileri geri hareket
// ettirerek farklı bellek adreslerine erişiyoruz. Gerçek sistemlerde sensör verileri bu şekilde bellekten okunur.
//
// YENİ KONU: POİNTER ARİTMETİĞİ
// Pointer üzerinde toplama ve çıkarma yapabilirsiniz.
// ptr + 1 = bir sonraki elemanın adresi demek.
// ptr++ = pointer'ı bir ileri taşı demek.
// ptr-- = pointer'ı bir geri taşı demek.
//
// ALGORİTMA:
// 1. Hedef mesafe verilerini diziye koy
// 2. Pointer ile dizinin başını göster
// 3. ptr++ ile pointer'ı ilerlet
// 4. Her adımda o adresteki değeri oku
// 5. Pointer'ı geri alarak önceki değere dön

#include <stdio.h>

int main() {
    // Radarın tespit ettiği 5 hedefin mesafeleri (km)
    int mesafeler[5] = {120, 85, 200, 45, 160};

    int *ptr = mesafeler; // Pointer dizinin başını gösteriyor
    int i;

    printf("=== FÜZE SAVUNMA HEDEF TAKİP SİSTEMİ ===\n\n");

    // ptr++ ile pointer'ı ilerlet, her adımda değeri oku
    printf("Hedefler yakından uzağa taranıyor:\n");
    for (i = 0; i < 5; i++) {
        printf("Hedef %d - Mesafe: %d km", i+1, *ptr);

        if (*ptr < 100) {
            printf(" - YAKIN TEHDİT!\n");
        } else {
            printf(" - Güvenli mesafe\n");
        }

        ptr++; // Pointer'ı bir sonraki elemana taşı
    }

    // Pointer şu an dizinin sonunu geçti
    // Geri almak için başa dönelim
    ptr = mesafeler; // Pointer'ı tekrar başa al

    printf("\nEn yakın hedef tekrar kontrol ediliyor:\n");
    printf("İlk hedef mesafesi: %d km\n", *ptr);
    printf("İkinci hedef mesafesi: %d km\n", *(ptr + 1));

    return 0; // Program hatasız bitti
}
