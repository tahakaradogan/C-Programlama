// Gun12-Kod2-PointerFonksiyon.c
//
// SENARYO:
// Bir füzenin güdüm sisteminde, hedef mesafesi
// sürekli güncelleniyor. Mesafe değerini fonksiyona
// kopyalamak yerine, pointer ile direkt bellekteki
// adresini gönderiyoruz. Fonksiyon o adresteki
// değeri güncelliyor — böylece ana programdaki
// değer de otomatik değişiyor.
//
// YENİ KONU: FONKSİYONA POINTER GÖNDERMEK
// Normalde fonksiyona değer gönderince kopya oluşur.
// Pointer gönderince kopya değil, orijinal değer
// değişiyor. Buna "referans ile geçirme" denir.
//
// ALGORİTMA:
// 1. Hedef mesafesini tanımla
// 2. Mesafeyi güncelleyen fonksiyon yaz
// 3. Fonksiyona pointer ile adresi gönder
// 4. Fonksiyon pointer üzerinden değeri güncelle
// 5. Ana programda değerin değiştiğini gör

#include <stdio.h>

// mesafe_guncelle FONKSİYONU
// int *mesafe : Değerin kendisi değil, adresi geliyor
// *mesafe = 0 : O adresteki değeri 0 yap — füze hedefe ulaştı
void mesafe_guncelle(int *mesafe) {
    printf("Füze hedefe yaklaşıyor...\n");
    printf("Mevcut mesafe: %d metre\n", *mesafe);   // Adresteki değeri oku
    *mesafe = *mesafe - 100;                        // Adresteki değeri 100 azalt
    printf("Yeni mesafe  : %d metre\n", *mesafe);
}

int main() {
    int hedef_mesafe = 500;   // Hedefe olan mesafe (metre)

    printf("=== FÜZE GÜDÜm SİSTEMİ ===\n\n");
    printf("Başlangıç mesafesi: %d metre\n\n", hedef_mesafe);

    // Fonksiyona pointer ile adres gönderiyoruz
    // & işareti = hedef_mesafe değişkeninin adresi
    mesafe_guncelle(&hedef_mesafe);
    mesafe_guncelle(&hedef_mesafe);
    mesafe_guncelle(&hedef_mesafe);

    printf("\nAna programdaki mesafe: %d metre\n", hedef_mesafe);
    // hedef_mesafe değişti çünkü fonksiyon pointer ile orijinali değiştirdi

    if (hedef_mesafe <= 200) {
        printf("UYARI! Füze hedefe çok yakın!\n");
    }

    return 0; // Program hatasız bitti
}
