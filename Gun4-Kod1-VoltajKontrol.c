// GUN4 KOD1
// SENARYO: Bir endüstriyel sistemde voltaj sensörü var.
// sistem voltajı okuyor ve güvenli aralıkta olup olmadığını kontrol ediyor.
// voltaj 12 ile 24 volt arasındaysa sistem normal , değilse alarm veriyor.
// Güç sistemlerinde voltaj ne çok düşük ne çok yüksek olmalı - ikiside tehlikeli.

// ALGORİTMA
// 1. Program başlasın
// 2. Voltaj değerini kutuya koy
// 3. Voltaj 12'den büyük veya mi ve 24'den küçük veya eşit mi kontrol et.
// 4. İkisi de doğruysa sistem normal yaz
// 5. Değilse alarm ver
// 6. Program bitsin

#include <stdio.h>
int main(){
  int voltaj_sensoru = 18;

  if(voltaj_sensoru >= 12 && voltaj_sensoru <= 24) {  
     printf("Sistem Normal. Voltaj: %d Volt\n",voltaj_sensoru);
  } else {
     printf("ALARM! voltaj guvenli aralik disinda: %d Volt\n", voltaj_sensoru);
  }
  return 0;
}

     
