// Gun15-Kod2-StructDizi.c
//
// SENARYO:
// Bir hava savunma sisteminde 3 farklı radar istasyonu var. Her istasyonun sinyal gücü,
// hedef tespit sayısı ve aktif/pasif durumu takip ediliyor. Bu bilgileri ayrı ayrı dizilerde
// tutmak yerine struct kullanarak her istasyonu tek bir yapıda tutuyoruz. Gerçek sistemlerde
// sensör verileri tam olarak bu şekilde yönetilir.
//
// YENİ KONU: STRUCT DİZİSİ
// Tıpkı int dizisi gibi struct dizisi oluşturabilirsin. radarlar[0], radarlar[1] her biri bir struct —
// yani bir radar istasyonunun tüm bilgileri.
//
// ALGORİTMA:
// 1. RadarIstasyonu struct'ını tanımla
// 2. 3 istasyon için struct dizisi oluştur
// 3. Her istasyonun verilerini doldur
// 4. For döngüsü ile tüm istasyonları kontrol et
// 5. Kritik durumları raporla

#include <stdio.h>
#include <string.h> // String işlemleri için

typedef struct {
    char isim[20];     // İstasyon adı
    int sinyal_gucu;   // Sinyal gücü (dBm)
    int hedef_sayisi;  // Tespit edilen hedef sayısı
    int aktif;         // 1 = aktif, 0 = pasif
} RadarIstasyonu;

void radar_rapor(RadarIstasyonu *r) {

    printf("--- %s ---\n", r->isim);

    if (r->aktif == 0) {
        printf("DURUM: PASİF — İstasyon çevrimdışı!\n\n");
        return;
    }

    printf("Sinyal Gücü  : %d dBm\n", r->sinyal_gucu);
    printf("Hedef Sayısı : %d\n", r->hedef_sayisi);

    if (r->sinyal_gucu < 50) {
        printf("UYARI! Sinyal gücü zayıf!\n");
    }

    if (r->hedef_sayisi > 3) {
        printf("ALARM! Çok sayıda hedef tespit edildi!\n");
    }

    if (r->sinyal_gucu >= 50 && r->hedef_sayisi <= 3) {
        printf("DURUM: Normal\n");
    }

    printf("\n");
}

int main() {

    RadarIstasyonu radarlar[3];

    // 1. İstasyon
    strcpy(radarlar[0].isim, "Kuzey Radar");
    radarlar[0].sinyal_gucu = 85;
    radarlar[0].hedef_sayisi = 2;
    radarlar[0].aktif = 1;

    // 2. İstasyon
    strcpy(radarlar[1].isim, "Guney Radar");
    radarlar[1].sinyal_gucu = 40;
    radarlar[1].hedef_sayisi = 5;
    radarlar[1].aktif = 1;

    // 3. İstasyon
    strcpy(radarlar[2].isim, "Dogu Radar");
    radarlar[2].sinyal_gucu = 0;
    radarlar[2].hedef_sayisi = 0;
    radarlar[2].aktif = 0;

    printf("=== HAVA SAVUNMA RADAR RAPORU ===\n\n");

    int i;
    for (i = 0; i < 3; i++) {
        radar_rapor(&radarlar[i]);
    }

    return 0;
}
