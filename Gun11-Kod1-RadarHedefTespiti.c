/*
 * Gun11-Kod1-RadarHedefTespiti.c
 *
 * SENARYO:
 * Bir hava savunma radarı, 5 farklı yönde tarama yapıyor.
 * Her yönde sinyal geri dönüş süresi ölçülüyor.
 * Sinyal 100 mikrosaniyenin altında geri dönerse
 * o yönde bir hedef var demektir — alarm verilir.
 * 100 ve üzerinde geri dönerse o yön temiz demektir.
 *
 * NOT: Gerçek sistemde sinyal geri dönüş süresi
 * radar donanımı tarafından ölçülür. Biz simüle ediyoruz.
 * Gerçek sistemde: sure = radar_olc(yon);
 *
 * ALGORİTMA:
 * 1. 5 yönün sinyal geri dönüş sürelerini diziye koy
 * 2. Her yön için kontrol et
 * 3. 100 mikrosaniyenin altındaysa HEDEF VAR alarm ver
 * 4. 100 ve üzerindeyse YÖN TEMİZ yaz
 * 5. Toplam hedef sayısını raporla
 */

#include <stdio.h>

 // hedef_var_mi FONKSİYONU
 // Sinyal geri dönüş süresine bakarak hedef olup
 // olmadığını kontrol eder.
 // 100 mikrosaniye altındaysa 1 döndürür — hedef var.
 // 100 ve üzerindeyse 0 döndürür — yön temiz.  

int hedef_var_mi(int sure) {
    if (sure < 100) {
        return 1; // Hedef var //
    } else {
        return 0; // Yön temiz //
    }
}

int main() {
     // 5 yönün sinyal geri dönüş süreleri (mikrosaniye)
     // Düşük süre = hedefe yakın = tehlike 
    int geri_donus_suresi[5] = {120, 75, 200, 45, 310};

    int hedef_sayisi = 0;   // Kaç yönde hedef tespit edildi 
    int i;

    printf("=== HAVA SAVUNMA RADAR SİSTEMİ ===\n\n");

    for (i = 0; i < 5; i++) {
        if (hedef_var_mi(geri_donus_suresi[i]) == 1) {
            printf("YON %d - Sinyal: %d us - HEDEF TESPİT EDİLDİ!\n",
                   i+1, geri_donus_suresi[i]);
            hedef_sayisi++;
        } else {
            printf("Yon %d - Sinyal: %d us - Temiz\n",
                   i+1, geri_donus_suresi[i]);
        }
    }

    printf("\n=== RADAR RAPORU ===\n");
    printf("Taranan Yon  : 5\n");
    printf("Hedef Sayisi : %d\n", hedef_sayisi);
    printf("Temiz Yon    : %d\n", 5 - hedef_sayisi);

    if (hedef_sayisi > 0) {
        printf("\nUYARI! %d yonde hedef tespit edildi!\n", hedef_sayisi);
    } else {
        printf("\nHava sahasi temiz.\n");
    }

    return 0;
}
