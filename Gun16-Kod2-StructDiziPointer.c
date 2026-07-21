// Gun16-Kod2-StructDiziPointer.c
//
// SENARYO:
// ASELSAN'ın hava savunma sisteminde 3 füze rampa
// istasyonu var. Her istasyonun adı, hazır füze sayısı
// ve aktif/pasif durumu takip ediliyor. Komuta merkezi
// tüm istasyonların durumunu anlık izliyor. Kritik
// durumda olan istasyona ikmal emri veriliyor.
//
// KONU: STRUCT DİZİSİ + POINTER
// Struct dizisi: Her eleman bir struct — bir istasyon.
// Pointer ile dizide geziyoruz.
// -> operatörü ile struct alanlarına erişiyoruz.
//
// ALGORİTMA:
// 1. RampaIstasyonu struct'ını tanımla
// 2. 3 istasyon için struct dizisi oluştur
// 3. Her istasyonun verilerini doldur
// 4. Pointer ile dizide gez
// 5. Kritik istasyonları tespit et, rapor ver

#include <stdio.h>
#include <string.h> // strcpy için gerekli — string kopyalamak için

// STRUCT TANIMI
// RampaIstasyonu: Bir füze rampa istasyonunun tüm bilgileri
typedef struct {
    char isim[20];      // İstasyon adı
    int fuze_sayisi;    // Hazır füze sayısı
    int aktif;          // 1 = aktif, 0 = pasif
} RampaIstasyonu;

// istasyon_rapor FONKSİYONU
// RampaIstasyonu *r : Struct'ın adresi geliyor
// -> operatörü ile struct alanlarına erişiyoruz
// Neden pointer? Struct'ı kopyalamak yerine
// adresini gönderiyoruz — daha hızlı, daha verimli
void istasyon_rapor(RampaIstasyonu *r) {

    printf("--- %s ---\n", r->isim);

    // Aktif mi pasif mi kontrol et
    if (r->aktif == 0) {
        printf("DURUM: PASİF — İstasyon çevrimdışı!\n\n");
        return; // Pasifse diğer kontrollere gerek yok, fonksiyondan çık
    }

    printf("Hazır Füze   : %d adet\n", r->fuze_sayisi);

    // Füze sayısı kritik mi?
    if (r->fuze_sayisi == 0) {
        printf("ALARM! Füze kalmadı! İKMAL GEREKİYOR!\n");
    } else if (r->fuze_sayisi < 3) {
        printf("UYARI! Füze sayısı kritik seviyede!\n");
    } else {
        printf("DURUM: Normal\n");
    }

    printf("\n");
}

int main() {

    // 3 istasyon için struct dizisi
    // Her eleman bir RampaIstasyonu struct'ı
    RampaIstasyonu istasyonlar[3];

    // 1. İstasyon verilerini doldur
    strcpy(istasyonlar[0].isim, "Kuzey Rampa"); // İsim kopyala
    istasyonlar[0].fuze_sayisi = 8;              // 8 füze hazır
    istasyonlar[0].aktif = 1;                    // Aktif

    // 2. İstasyon verilerini doldur
    strcpy(istasyonlar[1].isim, "Guney Rampa");
    istasyonlar[1].fuze_sayisi = 2;              // Kritik — 3'ten az
    istasyonlar[1].aktif = 1;                    // Aktif

    // 3. İstasyon verilerini doldur
    strcpy(istasyonlar[2].isim, "Dogu Rampa");
    istasyonlar[2].fuze_sayisi = 0;              // Füze kalmadı
    istasyonlar[2].aktif = 1;                    // Aktif

    printf("=== HAVA SAVUNMA RAMPA İSTASYON RAPORU ===\n\n");

    // Pointer ile dizide gez
    // Her turda bir istasyonun adresini fonksiyona gönder
    int i;
    for (i = 0; i < 3; i++) {
        istasyon_rapor(&istasyonlar[i]); // i. istasyonun adresini gönder
    }

    return 0; // Program hatasız bitti
}
