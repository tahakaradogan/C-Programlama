// GÜN7-KOD1
// SENERYO: Bir fabrikada üretim bandından 10 ürün geçiyor. Gün sonunda yönetici rapor istiyor - 
//          kaç ürün normal , kaç ürün hatalı ? Sistem gün boyunca sayıyor , gün sonunda otomatik rapor üretiyor
//          operatör her ürünü tek tek saymak zorunda kalmıyor.
// NOT: Gerçek kart olmadığı için ağırlık değerleri simüle edildi . Gerçek sistemde sensör her ürün geçtiğinde ölçüm yapar.
//  
// ALGORİTMA: 
// PROBLEM: 10 ürünü kontrol et, toplam hatalı ve normal sayısını raporla.
// ADIMLAR : 
// 1. program başlasın 
// 2. hatalı sayacını sıfırdan başlat. 
// 3. Normal sayacını sıfırdan başlat. 
// 4. Her ürün için ağırlık kontrolü yap.
// 5. Hatalıysa hatalı sayacaını 1 artır.
// 6. normalse normal sayacını 1 artır.
// 7. döngü bitince raporu ekrana yazdır
// 8. Program bitsin.


#include <stdio.h>

int main() {
    int i;
    int hatali = 0;
    int normal = 0;
    int agirliklar[10] = {6,3,8,2,7,4,9,1,5,6};

    for (i = 0; i < 10; i++) {
        if (agirliklar[i] < 5) {
            hatali++;
        } else
        {
            normal++;
        }
    }

    printf("=== URETIM RAPORU ===\n");
    printf("Toplam Urun : 10\n");
    printf("Normal Urun : %d\n", normal);
    printf("Hatali Urun : %d\n", hatali);

    return 0;
}


// BEKLENEN ÇIKTI:
// === URETIM RAPORU ===
// Toplam Urun : 10
// Normal Urun : 6
// Hatali Urun : 4
