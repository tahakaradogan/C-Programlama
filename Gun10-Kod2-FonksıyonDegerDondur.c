/*
 * Gun10-Kod2-FonksiyonDegerDondur.c
 *
 * SENARYO:
 * Ayni IHA sistemi. Bu sefer fonksiyon sadece ekrana
 * yazmakla kalmıyor — bir deger de donduruyor.
 * "Bu kart kritik mi?" sorusuna 1 (evet, kritik)
 * veya 0 (hayir, normal) cevabi veriyor.
 * Ana program bu cevaba gore karar aliyor ve
 * toplam kac kartin kritik oldugunu sayiyor.
 *
 * YENI KONU: DEGER DONDUREN FONKSIYON
 * Onceki fonksiyonda void kullandik — geri deger yoktu.
 * Simdi int kullaniyoruz — fonksiyon bize bir sayi dondurecek.
 * return komutu o sayiyi geri gonderiyor.
 *
 * ALGORITMA:
 * 1. Kritik kontrol fonksiyonunu tanimla
 * 2. Sicaklik 80 uzerindeyse 1 don (kritik)
 * 3. Degilse 0 don (normal)
 * 4. Main icerisinde sonuca gore alarm sayacini artir
 * 5. Toplam kritik kart sayisini raporla
 */

#include <stdio.h> // printf icin gerekli kutuphane

// FONKSIYON TANIMI
// int: Bu fonksiyon isini yapip bize bir tam sayi dondurecek.
//      1 donerse kart kritik, 0 donerse kart normal demek.
// kritik_mi: Fonksiyonun adi — "bu kart kritik mi?" sorusunu soruyor.
// (int sicaklik): Disaridan gonderilen sicaklik degeri.
int kritik_mi(int sicaklik) {

    if (sicaklik > 80) {             // Sicaklik 80 uzerindeyse
        return 1;                    // 1 dondur — "evet, kritik"
    } else {                         // 80 veya altindaysa
        return 0;                    // 0 dondur — "hayir, normal degil"
    }

}                                    // Fonksiyon burada bitiyor

int main() {

    // IHA'nin 3 elektronik kartinin sicakliklari
    int ucus_bilgisayari = 95;                   // Ucus bilgisayari karti sicakligi
    int motor_kontrol = 65;                      // Motor kontrol karti sicakligi
    int haberlesme = 82;                         // Haberlesme karti sicakligi

    int kritik_sayisi = 0;                       // Kac kartin kritik oldugunu sayacak

    printf("=== IHA ELEKTRONIK KART ANALIZ SISTEMI ===\n\n");

    // Her kart icin fonksiyonu cagiriyoruz
    // Fonksiyon 1 donerse kritik, 0 donerse normal
    if (kritik_mi(ucus_bilgisayari) == 1) {          // Fonksiyon 1 mi dondu?
        printf("ALARM! Ucus bilgisayari karti kritik: %d derece\n", ucus_bilgisayari);
        kritik_sayisi++;                             // Kritik sayacini 1 artir
    } else {
        printf("Ucus bilgisayari karti normal: %d derece\n", ucus_bilgisayari);
    }

    if (kritik_mi(motor_kontrol) == 1) {
        printf("ALARM! Motor kontrol karti kritik: %d derece\n", motor_kontrol);
        kritik_sayisi++;
    } else {
        printf("Motor kontrol karti normal: %d derece\n", motor_kontrol);
    }

    if (kritik_mi(haberlesme) == 1) {
        printf("ALARM! Haberlesme karti kritik: %d derece\n", haberlesme);
        kritik_sayisi++;
    } else {
        printf("Haberlesme karti normal: %d derece\n", haberlesme);
    }

    // Genel durum raporu
    printf("\n=== GENEL DURUM RAPORU ===\n");
    printf("Toplam Kart    : 3\n");
    printf("Kritik Kart    : %d\n", kritik_sayisi);
    printf("Normal Kart    : %d\n", 3 - kritik_sayisi);

    if (kritik_sayisi > 0) {
        printf("\nUYARI! IHA guvenli inise gecmeli!\n");
    } else {
        printf("\nTum kartlar normal. Ucus devam edebilir.\n");
    }

    return 0; // Program hatasiz bitti
}
