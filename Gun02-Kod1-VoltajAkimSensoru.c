// GUN 2 KOD 1
// SENARYO: Bir endüstriyel sistemde voltaj ve akım sensörleri var. kart açıldığında her iki sensörün değerini ekrana yazdırıyor.
// NOT: Gerçek kart olmadığı için değerleri kendim belirledim
// Gerçek sistemde: int voltaj_sensoru = voltaj_oku();
//                  int akim_sensoru = akim_oku();

// ALGORİTMA:
// 1. Program başlasın
// 2. voltaj değerini kutuya koy
// 3. akım değerini kutuya koy
// 4. her iki değeri ekrana yazdır
// 5. program bitsin

#include <stdio.h>
int main(){
  int voltaj_sensoru = 12;
  int akim_sensoru = 5;

  printf("Voltaj Sensoru: %d Volt\n",voltaj_sensoru);
  printf("Akim Sensoru: %d Amper\n",akim_sensoru);
  return 0 ;
 }
