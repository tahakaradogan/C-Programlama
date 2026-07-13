// Gun12-Kod1-PointerGiris.c
//
// SENARYO:
// Bir İHA'nın uçuş bilgisayarında irtifa sensöründen
// gelen değer, birden fazla sistem tarafından kullanılıyor.
// Hem navigasyon sistemi hem de alarm sistemi bu değere
// ihtiyaç duyuyor. Değeri kopyalamak yerine, bellekteki
// adresini paylaşıyoruz — böylece her sistem aynı
// gerçek değere bakıyor.
// Bu kavrama POINTER (İşaretçi) deniyor.
//
// YENİ KONU: POINTER
// Pointer nedir? Bir değişkenin bellekteki adresini
// tutan değişken. Değerin kendisini değil, nerede
// olduğunu saklıyor.
//
// ALGORİTMA:
// 1. İrtifa değişkenini tanımla
// 2. Pointer ile o değişkenin adresini tut
// 3. Pointer üzerinden değeri oku
// 4. Pointer üzerinden değeri değiştir
// 5. Sonuçları ekrana yazdır

#include <stdio.h>

int main() {
    int irtifa = 1500;     // İHA'nın mevcut irtifası (metre)
    int *ptr = &irtifa;    // ptr pointer'ı, irtifa'nın adresini tutuyor
                           // & işareti = "bu değişkenin adresi" demek
                           // * işareti = "bu bir pointer" demek

    printf("=== İHA İRTİFA SİSTEMİ ===\n\n");

    // Değişkene doğrudan erişim
    printf("İrtifa (direkt)  : %d metre\n", irtifa);

    // Pointer üzerinden değere erişim
    // *ptr = "ptr'nin gösterdiği adresteki değer" demek
    printf("İrtifa (pointer) : %d metre\n", *ptr);

    // Pointer üzerinden değeri değiştir
    *ptr = 2000; // irtifa değişkeninin değerini 2000 yaptık
                 // ama bunu pointer üzerinden yaptık

    printf("\nİrtifa güncellendi.\n");
    printf("Yeni irtifa      : %d metre\n", irtifa);
    // irtifa değişkeni de 2000 oldu çünkü aynı bellek adresini paylaşıyorlar

    return 0; // Program hatasız bitti
}
