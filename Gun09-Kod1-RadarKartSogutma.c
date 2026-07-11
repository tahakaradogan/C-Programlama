/*
* SENARYO: Radar sisteminin elektronik kartı aşırı ısındığından, 
*          sıcaklık güvenli seviyeye (60 derece) inene kadar soğutma fanı çalışmalı.
*          sıcaklığın kaç saniyede düşeceği önceden bilinmediği için FOR değil WHİLE döngüsü kullanıyoruz.  
*
* NOT: Gerçek sistemde sıcaklık LM35 veya termokupl gibi bir sensörden okunur. Ben simüle ediyorum.
*
* ALGORİTMA: 
* 1.Başlangıç sıcaklığını ve güvenli eşiğini belirle.
* 2. sıcaklık eşiğin ÜSTÜNDE olduğu sürece:
*    - fanın çalıştığını bildir. 
*    - sıcaklığı azalt (simulasyon)
*    - geçen süreyi say.
* 3. sıcaklık eşiğin altına indiğinde fanı durdur.
* 4. toplam soğutma süresini rapor et
*/

#include <stdio.h>

int main() {
  int sicaklik = 85;
  int guvenli_esik = 60;
  int gecen_sure = 0;

printf("--- RADAR KART SOGUTMA SISTEMI ---\n");
printf("Baslangic sicakligi: %d C\n" , sicaklik);
printf("Guvenli esik: %d C\n\n", guvenli_esik);

while (sicaklik > guvenli_esik) {
   printf("[%d.sn] Fan Çalışıyor... Sicaklik: %d C\n" , gecen_sure , sicaklik);
   sicaklik = sicaklik - 3;
   gecen_sure++;
}

printf("\nSicaklik Güvenli Seviyeye İndi: %d C\n", sicaklik);
printf("Fan Durduruldu. Toplam Soğutma Suresi: %d saniye\n, gecen_sure");

 return 0;

}


