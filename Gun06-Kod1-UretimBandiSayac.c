// GÜN6-KOD1 (FOR dögüsünü ilk kez burda öğreniyorum.)
// SENARYO: Bir fabrikada üretim bandı var. 
//          Bant üzerinden ürünler geçiyor , her geçişte sensör tetikleniyor ve sistem sayıyor.     
//          oparatör ekranda kaç ürün geçtiğini anlık takip ediyor.          
//          
// NOT:Gerçek kart olmadığı için sensör simüle edildi. gerçek sistemde sensör tetiklenince sayaç artar.
// İlk kez döngü kullanılacak. Döngü ne demek ? :aynı işi tekrar tekrar yaptırmak.  
// ALGORİTMA:
// PROBLEM: Üretim bandından geçen 5 ürünü tek tek say ve her birinin bant üzerinden geçtiğini ekrana yazdır.
// ADIMLAR:
// 1. Program başlasın
// 2. sayaç 1'den başlasın
// 3. sayaç 5'e ulaşana kadar tekrarla 
// 4. her tekrarda ürün numarasını ekrana yazdır.
// 5. sayacı 1 arttır.

#include <stdio.h>

int main() {
  int i;

  for (i=1; i <= 5; i++) {
      printf("Urun %d bant uzerinden gecti.\n" , i);
  }

  return 0;
}
