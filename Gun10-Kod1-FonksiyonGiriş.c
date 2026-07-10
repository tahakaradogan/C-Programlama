/*
 * Gun10-Kod1-FonksiyonGiris.c
 *
 * SENARYO:
 * Bir IHA'nin icinde 3 kritik elektronik kart bulunuyor:
 * ucus bilgisayari karti, motor kontrol karti ve haberlesme karti.
 * Bu kartlar ucus sirasinda isiniyor. Herhangi biri 80 dereceyi
 * gecerse IHA guvenli inis yapmali. Sistem her karti sirayla
 * kontrol ediyor. Ayni kontrol kodu 3 kart icin tekrar
 * yazilmamasi icin FONKSIYON kullaniyoruz.
 *
 * NOT: Gercek sistemde sicaklik her kartın uzerindeki
 * sicaklik sensorunden okunur. Biz simule ediyoruz.
 *
 * ALGORITMA:
 * 1. Sicaklik kontrol fonksiyonunu tanimla
 * 2. Fonksiyona kart sicakligini gonder
 * 3. 80 derecenin uzerindeyse ALARM, degilse Normal yaz
 * 4. Her kart icin fonksiyonu ayri ayri cagir
 */

#include <stdio.h> // printf komutunu kullanmak icin ekliyoruz
                   // Bu satir olmadan ekrana hicbir sey yazamazdi

// FONKSIYON TANIMI
// void: Bu fonksiyon IHA'nin elektronik kartinin sicakligini
//       kontrol eder ve sonucu ekrana yazar.
//       Geriye hicbir deger dondurmez, sadece ekrana yazar.
// sicaklik_kontrol: Fonksiyonun adı, ne is yaptigini anlatiyor.
// (int sicaklik): Disaridan gonderilen sicaklik degeri bu kutuda saklanir.
//                 Her cagrildiginda farkli bir deger gelebilir.
void sicaklik_kontrol(int sicaklik) {

    if (sicaklik > 80) {                                                         // Sicaklik 80 derecenin uzerindeyse
        printf("ALARM! Kart sicakligi kritik: %d derece\n", sicaklik);
    } else {                                                                     // 80 derece veya altindaysa
        printf("Kart sicakligi normal: %d derece\n", sicaklik);
    }

}                                                                                // Fonksiyon burada bitiyor

int main() {

    printf("=== IHA ELEKTRONIK KART SICAKLIK SISTEMI ===\n\n");

    // Fonksiyonu her kart icin ayri ayri cagiriyoruz.
    // Ayni kodu 3 kez yazmak yerine fonksiyonu 3 kez cagiriyoruz.
    sicaklik_kontrol(95);                                           // Ucus bilgisayari karti: 95 derece
    sicaklik_kontrol(65);                                           // Motor kontrol karti: 65 derece
    sicaklik_kontrol(82);                                           // Haberlesme karti: 82 derece

    return 0; // Program hatasiz bitti
}
