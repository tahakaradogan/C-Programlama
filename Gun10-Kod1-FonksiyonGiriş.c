/*
 * Gun10-Kod1-FonksiyonGiris.c
 *
 * SENARYO:
 * Bir IHA'nin icinde 3 kritik elektronik kart bulunuyor:  ucus bilgisayari karti, motor kontrol karti ve haberlesme karti.
 * Bu kartlar ucus sirasinda isiniyor. Herhangi biri 80 dereceyi gecerse IHA guvenli inis yapmali. Sistem her karti sirayla
 * kontrol ediyor. Ayni kontrol kodu 3 kart icin tekrar yazilmamasi icin FONKSIYON kullaniyoruz.
 *
 * NOT: Gercek sistemde sicaklik her kartın uzerindeki sicaklik sensorunden okunur. Biz simule ediyoruz.
 *
 * ALGORITMA:
 * 1. Sicaklik kontrol fonksiyonunu tanimla
 * 2. Fonksiyona kart sicakligini gonder
 * 3. 80 derecenin uzerindeyse ALARM, degilse Normal yaz
 * 4. Her kart icin fonksiyonu ayri ayri cagir
 */

#include <stdio.h>

void sicaklik_kontrol(char* kart_adi, int sicaklik) {

    if (sicaklik > 80) {
        // %s -> String (Metin) geleceğini belirtir.
        // %d -> Integer (Sayı) geleceğini belirtir.
        printf("ALARM! %s sicakligi kritik: %d derece! (ACIL INIS PROTOKOLU)\n", kart_adi, sicaklik);
    } else {
        printf("%s sicakligi normal: %d derece.\n", kart_adi, sicaklik);
    }
}

int main() {
    printf("=== IHA ELEKTRONIK KART SICAKLIK SISTEMI ===\n\n");

    // Fonksiyona artık hem kartın ismini hem de simüle edilen sıcaklığını gönderiyoruz:
    sicaklik_kontrol("Ucus Bilgisayari Karti", 95);
    sicaklik_kontrol("Motor Kontrol Karti", 65);
    sicaklik_kontrol("Haberlesme Karti", 82);

    return 0;
}
