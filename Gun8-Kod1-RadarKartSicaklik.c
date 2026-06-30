// GÜN 8 KOD 1
// SENARYO: Bir hava savunma sisteminde 5 radar istasyonu var. Her istasyonun içinde elektronik işlem kartı bulunuyor.
//          Bu kartlar sürekli çalıştığı için ısınıyor. Kart sıcaklığı kritik seviyeyi geçerse arıza riski oluşuyor.
//          sistem her radarın kart sıcaklığını sırayla kontrol ediyor.
// 
// NOT: Gerçek kart olmadığı için sıcaklık değerleri simüle edildi.
// ALGORİTMA: 
// 1. Program başlasın.
// 2. 5 radarın kart sıcaklık değerlerini hafızaya koy.
// 3. Her radar için sırayla kontrol et.
// 4. sıcaklık 80'i geçtiyse "kritik" yaz.
// 5. geçmediyse "Normal" yaz.
// 6. program bitsin.

#include <stdio.h>

int main() {
    int i;
    int kart_sicakliklari[5] = {65,92,70,88,55};

    for (i = 0; i < 5; i++)
     {
       if (kart_sicakliklari[i] > 80) 
          {
            printf("Radar %d - Kart Sicakligi: %d - KRITIK!\n" , i+1, kart_sicakliklari[i]);
          } else 
             {
               printf("Radar %d - Kart Sicakligi: %d - Normal\n" , i+1, kart_sicakliklari[i]);
             }
     }

     return 0 ;
}
 
