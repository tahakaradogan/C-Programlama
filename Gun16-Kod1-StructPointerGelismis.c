// Gun16-Kod1-StructPointerGelismis.c
//
// SENARYO:
// Bir ROKETSAN füze sisteminde, füzenin uçuş sırasında
// 3 kritik parametresi anlık olarak izleniyor:
// hız, irtifa ve yakıt seviyesi. Bu 3 parametre
// tek bir struct içinde tutuluyor. Struct pointer
// ile fonksiyona gönderiliyor. Fonksiyon parametreleri
// kontrol edip güvenli uçuş olup olmadığına karar veriyor.
// Gerçek füze sistemlerinde sensör verileri tam
// olarak bu şekilde struct içinde yönetilir.
//
// KONU: STRUCT + POINTER BİRLİKTE
// Struct: Farklı türdeki değişkenleri tek çatı
//         altında toplayan yapı.
// Struct Pointer: Struct'ın adresini tutan pointer.
//         -> operatörü ile alanlara erişilir.
//
// ALGORİTMA:
// 1. FuzeVerisi struct'ını tanımla
// 2. Füzenin mevcut verilerini struct'a koy
// 3. Struct pointer alan kontrol fonksiyonu yaz
// 4. Fonksiyon her parametreyi kontrol etsin
// 5. Güvenli uçuş var mı karar versin

#include <stdio.h>

// STRUCT TANIMI
// FuzeVerisi: Füzenin uçuş parametrelerini tutan yapı
typedef struct {
    int hiz;           // Füzenin hızı (km/s)
    int irtifa;        // Füzenin irtifası (metre)
    int yakit;         // Yakıt seviyesi (%)
} FuzeVerisi;

// ucus_kontrol FONKSİYONU
// FuzeVerisi *f : Struct'ın adresi geliyor
// -> operatörü : Pointer üzerinden struct alanına eriş
// Neden pointer? Struct büyük olabilir, kopyalamak
// yerine adresini gönderiyoruz — daha hızlı, daha verimli
void ucus_kontrol(FuzeVerisi *f) {
    int hata = 0; // Hata bayrağı — 0: sorun yok, 1: sorun var

    printf("=== FÜZE UÇUŞ KONTROL SİSTEMİ ===\n\n");

    // Hız kontrolü
    // -> operatörü: f pointer'ı üzerinden hiz alanına eriş
    if (f->hiz < 500) {
        printf("UYARI! Hız düşük: %d km/s\n", f->hiz);
        hata = 1;
    } else {
        printf("Hız normal: %d km/s\n", f->hiz);
    }

    // İrtifa kontrolü
    if (f->irtifa < 1000) {
        printf("ALARM! İrtifa kritik: %d metre\n", f->irtifa);
        hata = 1;
    } else {
        printf("İrtifa normal: %d metre\n", f->irtifa);
    }

    // Yakıt kontrolü
    if (f->yakit < 20) {
        printf("ALARM! Yakıt kritik: %%%d\n", f->yakit);
        hata = 1;
    } else {
        printf("Yakıt normal: %%%d\n", f->yakit);
    }

    // Genel karar
    printf("\n=== UÇUŞ KARARI ===\n");
    if (hata == 1) {
        printf("UÇUŞ GÜVENLİ DEĞİL! Müdahale gerekiyor.\n");
    } else {
        printf("TÜM SİSTEMLER NORMAL. Uçuş devam ediyor.\n");
    }
}

int main() {

    // Füzenin mevcut uçuş verileri
    FuzeVerisi fuze;
    fuze.hiz = 750;      // Normal
    fuze.irtifa = 800;   // Kritik — 1000 metrenin altında
    fuze.yakit = 35;     // Normal

    // Struct'ın adresini fonksiyona gönderiyoruz
    // & işareti = fuze struct'ının adresini al
    ucus_kontrol(&fuze);

    return 0; // Program hatasız bitti
}
