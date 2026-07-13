// Gun13-Kod1-PointerDizi.c
//
// SENARYO:
// Bir hava savunma sisteminde 5 radar istasyonunun
// sinyal güçleri bir dizide tutuluyor. Pointer kullanarak
// dizi elemanlarına erişiyoruz. Gerçek sistemlerde
// diziler pointer ile yönetilir — dizi adı zaten
// dizinin ilk elemanının adresidir.
//
// YENİ KONU: POİNTER VE DİZİ İLİŞKİSİ
// C dilinde dizi adı, dizinin ilk elemanının
// adresini tutar. Yani dizi adı aslında bir pointer.
// ptr[i] ile *(ptr+i) aynı şeyi ifade eder.
//
// ALGORİTMA:
// 1. 5 radar istasyonunun sinyal güçlerini diziye koy
// 2. Pointer ile dizinin ilk elemanının adresini tut
// 3. Pointer üzerinden tüm elemanlara sırayla eriş
// 4. Her istasyonun sinyal gücünü ekrana yazdır

#include <stdio.h>

int main() {
    // 5 radar istasyonunun sinyal güçleri (dBm)
    int sinyal_gucu[5] = {85, 62, 91, 74, 55};

    // ptr pointer'ı dizinin ilk elemanının adresini tutuyor
    // sinyal_gucu = &sinyal_gucu[0] ile aynı şey
    int *ptr = sinyal_gucu;

    int i;

    printf("=== RADAR İSTASYON SİNYAL RAPORU ===\n\n");

    for (i = 0; i < 5; i++) {
        // *(ptr + i) = ptr'nin i adım ilerisindeki değer
        // ptr[i] ile aynı şey — iki yazım da doğru
        printf("İstasyon %d - Sinyal Gücü: %d dBm", i+1, *(ptr + i));

        if (*(ptr + i) > 80) {
            printf(" - Güçlü Sinyal\n");
        } else if (*(ptr + i) > 60) {
            printf(" - Orta Sinyal\n");
        } else {
            printf(" - Zayıf Sinyal!\n");
        }
    }

    return 0; // Program hatasız bitti
}
