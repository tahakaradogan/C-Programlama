// Gun14-Kod2-PointerDonduren.c
//
// SENARYO:
// Bir hava savunma sisteminde, birden fazla radar istasyonunun ölçtüğü sinyal verileri arasından
// en tehlikeli hedefi (en yakın mesafedeki) bulmak gerekiyor. Fonksiyon en yakın hedefin adresini
// döndürüyor — böylece ana program o değeri pointer üzerinden okuyup güncelleyebiliyor.
//
// YENİ KONU: POINTER DÖNDÜREN FONKSİYON
// Fonksiyon sadece değer değil, adres de döndürebilir.
// int* yazarak "bu fonksiyon bir adres döndürecek"
// diyoruz. Döndürülen adres üzerinden değeri
// okuyabilir veya değiştirebiliriz.
//
// ALGORİTMA:
// 1. Radar istasyonlarının tespit ettiği mesafeleri diziye koy
// 2. En küçük mesafeyi bulan fonksiyon yaz
// 3. Fonksiyon en küçük mesafenin adresini döndürsün
// 4. Ana program o adresi pointer ile okusun

#include <stdio.h>

// en_yakin_hedef FONKSİYONU
// int* : Bu fonksiyon bir adres döndürecek
// dizi[] : Dizinin adresi geliyor — pointer ile aynı şey
// boyut  : Dizinin kaç elemanlı olduğu
int* en_yakin_hedef(int dizi[], int boyut) {
    int *en_yakin = &dizi[0]; // Başlangıçta ilk eleman en yakın kabul et
    int i;

    for (i = 1; i < boyut; i++) {
        if (dizi[i] < *en_yakin) { // Daha yakın hedef bulduk mu?
            en_yakin = &dizi[i];   // Yeni en yakın hedefin adresini tut
        }
    }

    return en_yakin; // En yakın hedefin adresini döndür
}

int main() {
    // Radar istasyonlarının tespit ettiği hedef mesafeleri (km)
    int mesafeler[5] = {120, 85, 200, 45, 160};
    int *tehlikeli; // En yakın hedefin adresini tutacak
    int i;

    printf("=== HAVA SAVUNMA EN YAKIN HEDEF SİSTEMİ ===\n\n");

    // Tüm hedefleri listele
    printf("Tespit edilen hedefler:\n");
    for (i = 0; i < 5; i++) {
        printf("Hedef %d: %d km\n", i+1, mesafeler[i]);
    }

    // En yakın hedefin adresini al
    tehlikeli = en_yakin_hedef(mesafeler, 5);

    printf("\n=== TEHDİT RAPORU ===\n");
    printf("En yakın hedef: %d km\n", *tehlikeli);
    printf("UYARI! Savunma sistemi devreye alınıyor!\n");

    // Pointer üzerinden değeri güncelle — hedef etkisiz hale getirildi
    *tehlikeli = 999;
    printf("\nHedef etkisiz hale getirildi.\n");
    printf("Güncellenen mesafe: %d km\n", *tehlikeli);

    return 0; // Program hatasız bitti
}
