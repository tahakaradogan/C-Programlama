// GÜN 3 KOD 2 
// SENARYO: Bir endüstriyel sistemde sıcaklık sensörü var.
// sıcaklık 80 derecenin üzerindeyse alarm veriyor.
// değilse sistem normal çalışıyor mesajı veriyor.
// sistem her zaman bir mesaj üretmeli - ya alarm ya normal
// NOT: Gerçek kart olmadığı icin sıcaklık değeri kendim belirledim.
// Gerçek sistemde: int sicaklik_sensoru = sensor_oku();

// ALGORİTMA:
// 1. Program başlasın.
// 2. Sıcaklık değerini kutuya koy.
// 3. Sıcaklık 80 dereceden büyük mü kontrol et.
// 4. Büyükse alarm ver
// 5. Büyük DEĞİLSE sistem normal yaz.
// 6. Program bitsin.

#include <stdio.h>
int main() {
  int sicaklik_sensoru = 65;

if(sicaklik_sensoru > 80){
    printf("ALARM! Sicaklik kritik: %d derece\n",sicaklik_sensoru);
      } 
else { 
    printf("Sistem Normal sicaklikta: %d derece \n", sıcaklık_sensoru);
}
return 0;
}
