/* GUN8 - KOD 2
 * SENARYO: Hava savunma sisteminde 5 radar istaasyonu var.
 *          Her istasyonun içinde sürekli çalışan elektronik işlem kartı bulunuyor.
 *          Bu kartlar uzun süre çalıştıkça ısınıyor
 *          Gün sonunda komuta merkezi hangi radar kartının krıtik sıcaklığa ulaştığını ve kaç tanesinin bakım gerektiğini rapor olarak almak istiyor.
 *
 *  NOT: Gerçek sistemde her radarın kartı üzerinde sıcaklık sensörü bulunur ve değer oradan okunur.
 *       biz simüle ettiğimiz için değerleri elle belirledik.
 *
 * ALGORİTMA: 
 * 1. Program başlasın.
 * 2. krıtik sayacını sıfırla.
 * 3. Her radar için kart sıcaklığını kontrol et
 * 4. 80 derecenin üzerindeyse krıtik say ve ekrana yaz.
 * 5. Değilse normal yaz.  
 * 6. Tüm radarlar kontrol edilince raporu yazdır.
 * 7. Program bitsin.
 */  

#include <stdio.h>  

int main() {
  int i;
  int kritik_sayisi = 0;
  int kart_sicaklikları[5] = {65,92,70,88,55};

  for (i = 0; i < 5; i++) {
       if (kart_sicakliklari[i] > 80) 
        { 
          printf("radar %d - Kart Sicakliği : %d - KRITIK!\n", i+1, kart_sicakliklari[i]);
          kritik_sayisi++; 
        } else {
           printf("Radar %d - Kart Sicakliği : %d - Normal\n" , i+1, kart_sicakliklari[i]);
        }
  }
 
  printf("--- KOMUTA MERKEZI RAPORU ---\n");
  printf("Toplam Radar : 5\n");
  printf("Kritik Kart Sayisi : %d\n", kritik_sayisi);

 return 0;

}










