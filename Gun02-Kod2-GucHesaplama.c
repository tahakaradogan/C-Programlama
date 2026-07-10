// GUN2 KOD2 
// SENARYO: Bir endüstriyel sistemde voltaj ve akım sensörleri var
// sistem bu iki değeri okuduktan sonra gücü hesaplıyor.
// Guc = Voltaj x Akım (P=V x I)
// NOT: Gerçek kart olmadığı için değerleri kendim belirledim.
// Gerçek Sistemde: int voltaj_sensoru = voltaj_oku();
//                  int akim_sensoru = akim_oku();

// ALGORİTMA:
// 1. Program başlasın
// 2. Voltaj değerini kutuya koy
// 3. Akım değerini kutuya koy
// 4. Guc = Voltaj x Akim hesapla , sonucu kutuya koy
// 5. Gucu ekrana yazdır
// 6. Program bitsin

#include <stdio.h>

int main() {
  int voltaj_sensoru = 12;
  int akim_sensoru = 5;
  int guc = voltaj_sensoru * akim_sensoru;

printf("Guc: %d Watt\n"guc);

return 0;
}
