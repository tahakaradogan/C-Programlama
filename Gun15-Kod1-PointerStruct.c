// Gun15-Kod1-PointerStruct.c
//
// SENARYO:
// Bir İHA'nın uçuş kontrol sisteminde, her uçuştan önce 3 kritik parametre kontrol ediliyor:
// yakıt seviyesi, batarya voltajı ve motor sıcaklığı. Bu 3 parametre tek bir yapıda (struct) tutulacak.
// Struct pointer ile fonksiyona gönderilerek tüm parametreler tek seferde kontrol edilecek.
// Gerçek sistemlerde sensör verileri bu şekilde struct içinde gruplandırılır ve pointer ile fonksiyonlar arasında taşınır.
//
// YENİ KONU: STRUCT VE POINTER
// Struct: Farklı türdeki değişkenleri tek çatı altında toplayan yapı. Sensör, motor, kart gibi
// gerçek donanımları temsil etmek için kullanılır. Struct Pointer: Struct'ın adresini tutan pointer.
// -> operatörü ile struct içindeki alanlara erişilir.
//
// ALGORİTMA:
// 1. UcusVerisi adında struct tanimla
// 2. Struct içine yakıt, voltaj ve sıcaklık koy
// 3. Struct pointer alan kontrol fonksiyonu yaz
// 4. Fonksiyon her parametreyi kontrol etsin
// 5. Kritik değer varsa uçuş iptal edilsin

#include <stdio.h>

// STRUCT TANIMI
// UcusVerisi: İHA'nın uçuş öncesi kontrol parametreleri
typedef struct {
    int yakit_seviyesi;   // Yakıt seviyesi (%)
    float voltaj;         // Batarya voltajı (V)
    int motor_sicakligi;  // Motor sıcaklığı (°C)
} UcusVerisi;

// ucus_kontrol FONKSİYONU
// UcusVerisi *veri : Struct'ın adresi geliyor
// -> operatörü : Pointer üzerinden struct alanına eriş
void ucus_kontrol(UcusVerisi *veri) {
    int hata = 0; // Hata bayrağı

    printf("=== UÇUŞ ÖNCESİ KONTROL ===\n\n");

    // Yakıt kontrolü
    if (veri->yakit_seviyesi < 20) {
        printf("HATA! Yakıt kritik seviyede: %%%d\n", veri->yakit_seviyesi);
        hata = 1;
    } else {
        printf("Yakıt seviyesi normal: %%%d\n", veri->yakit_seviyesi);
    }

    // Voltaj kontrolü
    if (veri->voltaj < 11.5) {
        printf("HATA! Batarya voltajı düşük: %.1f V\n", veri->voltaj);
        hata = 1;
    } else {
        printf("Batarya voltajı normal: %.1f V\n", veri->voltaj);
    }

    // Motor sıcaklığı kontrolü
    if (veri->motor_sicakligi > 80) {
        printf("HATA! Motor aşırı ısındı: %d derece\n", veri->motor_sicakligi);
        hata = 1;
    } else {
        printf("Motor sıcaklığı normal: %d derece\n", veri->motor_sicakligi);
    }

    // Genel durum
    printf("\n=== UÇUŞ KARARI ===\n");
    if (hata == 1) {
        printf("UÇUŞ İPTAL! Kritik parametre tespit edildi.\n");
    } else {
        printf("TÜM SİSTEMLER NORMAL. Uçuş onaylandı.\n");
    }
}

int main() {
    // İHA'nın mevcut uçuş verileri
    UcusVerisi iha;
    iha.yakit_seviyesi = 15;  // Kritik — %20 altında
    iha.voltaj = 12.3;        // Normal
    iha.motor_sicakligi = 65; // Normal

    // Struct'ın adresini fonksiyona gönderiyoruz
    ucus_kontrol(&iha);

    return 0; // Program hatasız bitti
}
