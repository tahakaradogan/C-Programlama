// GÜN6 KOD2
// SENARYO: Bir fabrikada üretim bandından 10 ürün geçiyor. her ürün geçerken ağırlık sensörü ölçüm yapıyor.
//          5 kg'ın altındaki ürünler kalite standardını karşılamıyor - HATALI. 5 kg ve üzeri normal.
//          sistem otomatik karar veriyor , bant durmuyor.
//
// NOT: Gerçek kart olmadığı için ağırlık sensörü simüle edildi. 
//      gerçek sistemde her ürün geçtiğinde sensör ölçüm yapar ve değeri gönderir. ben o değerleri elle belirledik.
//
// ALGORİTMA :
// PROBLEM: Bantdan geçen 10 ürünün ağırlığını kontrol et , hatalı olanları tespit et.
// ADIMLAR:
// 1. Program başlasın.
// 2. 10 ürünün ağırlık değerlerini hafızaya koy 
// 3. sayaç 0'dan başlasın
// 4. her ürün için ağırlık sensöründen değer oku
// 5. ağırlık 5 kg'ın altındaysa ekrana hatalı yaz.
// 6. 5 kg ve üzerindeyse ekrana normal yaz.
// 7. tüm ürünler kontrol edilince program bitsin.

#include <stdio.h>

int main() {
  int i;
  int agirliklar[10] = {6,3,8,2,7,4,9,1,5,6};

  for (i = 0; i < 10; i++) {
       if (agirliklar[i] < 5) 
    { 
       printf("Urun %d - Agirlik: %d kg - HATALI\n" , i+1, agirliklar[i]);
    }
       else {
         printf("Urun %d - Agirlik: %d kg - Normal\n", i+1, agirliklar[i]);
       }
  }
return 0;
}
 
        
