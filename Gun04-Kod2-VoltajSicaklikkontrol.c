// SENARYO
// Bir endüstriyel sistemde hem voltaj hem sıcaklık sensörü var
// ikisi aynı anda izleniyor. voltaj 12-24 volt arasında VE sıcaklık 80 derecenin altındaysa sistem normal.
// herhangi biri sınırı aşarsa alarm veriyor
// gerçek sistemlerde tek parametre değil, birden fazla parametre aynı anda kontrol edilir.
//
// ALGORİTMA
// Problem: Hem voltajı hem sıcaklığı aynı anda kontrol et.
// ADIMLAR:
// 1. Program başlasın
// 2. voltaj değerini kutuya koy.
// 3. sıcaklık değerini kutuya koy
// 4. voltaj güvenli aralıkta mı VE sıcaklık güvenli mi kontrol et 
// 5. ikisi de güvenliyse sistem normal yaz.
// 6. biri bile sınırı aşmışsa alarm ver
// 7. program bitsin

#include <stdio.h>
int main() {
  int voltaj_sensoru = 18;
  int sicaklik_sensoru = 95;

  if(voltaj_sensoru >= 12 && voltaj_sensoru <= 24 && sicaklik_sensoru < 80 )
   {
     printf("Sistem Normal.\n");
   } 
  else
   {
     printf(" ALARM! SİSTEM PARAMETRELERİ GUVENLİ DEĞİL\n")
     printf("Voltaj Degeri: %d volt - Sicaklik Degeri: %d derece\n", voltaj_sensoru , sicaklik_sensoru);
   }

return 0;

}


      
