// GUN 7 KOD 2
// SENARYO: Aynı fabrika. Sistem sadece rapor üretmiyor, 
// hatalı ürün sayısı 3'ü geçerse otomatik alarm verip bandı durduruyor.
// kalite standartları sıkı , 3'ten fazla hatalı ürün kabul  edilemiyor.
// NOT: Gerçek kart olmadığı için ağırlık değerleri simüle edildi.

// ALGORİTMA : 
// 1. Program başlasın
// 2. sayacları sıfırla 
// 3. her ürün için kontrol et
// 4. hatalıysa sayacı artır.
// 5. hatalı sayısı 3'ü geçtiyse alarm ver, bandı durdur.
// 6. döngüden çık (break)
// 7. raporu yazdır
// 8. program bitsin

#include <stdio.h>

int main() {
    int i;
    int hatali = 0;
    int normal = 0;
    int bant_durdu = 0;
    int agirliklar[10] = {6,3,8,2,7,4,9,1,5,6};

    for (i = 0; i < 10; i++)  
    { 
      if(agirliklar[i] < 5) 
      { hatali++; 
        if (hatali > 3) 
           { 
             printf("ALARM! Hatali urun limiti asıldı! Bant durduruluyor!\n");
             bant_durdu = 1 ;
             break;
           }
      } else
        {
          normal++;
        }
    }

printf("=== URETIM RAPORU ===\n");
printf("Normal Urun : %d\n", normal);
printf("Hatali Urun : %d\n", hatali);
if (bant_durdu == 1) 
   { 
     printf("Bant Durumu : DURDURULDU\n");
   } else {
       printf("Bant Durumu : Calisiyor\n");
   }

  return 0 ;

}


 


















         
