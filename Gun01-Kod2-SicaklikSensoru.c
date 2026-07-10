// GÜN 1 KOD 2 
// SENARYO: Bir endüstriyel sistemde sıcaklık sensörü var. kart açıldığında sıcaklık değerini ekrana yazdırıyor.
// NOT: Gerçek kart olmadığı için sıcaklık değerini kendimiz belirledik.
// Gerçek Sistemde: int sicaklik_sensoru = sensor_oku();

// ALGORİTMA:
// 1. Program başlasın
// 2. sıcaklık değerini kutuya koy
// 3. o kutudaki değeri ekrana yazdır
// 4. program bitsin

#include <stdio.h>
int main(){
  int sicaklik_sensoru = 35;
  printf("Sensor Sıcakliği: %d derece\n",sicaklik_sensoru);
  return 0;
}
