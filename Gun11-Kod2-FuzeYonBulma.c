// Gun11-Kod2-FuzeYonBulma.c
//
// SENARYO:
// Bir füze savunma sisteminde, ateşlenen füzenin
// hangi yönden geldiğini tespit etmek gerekiyor.
// Sistem 4 farklı sensörden sinyal gücü okuyor.
// En güçlü sinyalin geldiği yön, füzenin geldiği
// yön olarak kabul ediliyor.
// En güçlü sinyal hangi sensördeyse o sensörün
// yönüne savunma sistemi yönlendiriliyor.
//
// NOT: Gerçek sistemde sinyal gücü radar sensöründen
// okunur. Biz simüle ediyoruz.
// Gerçek sistemde: sinyal[i] = sensor_oku(i);
//
// ALGORİTMA:
// 1. 4 sensörün sinyal güçlerini diziye koy
// 2. En güçlü sinyali bul
// 3. Hangi sensörde en güçlü sinyal varsa
//    füze o yönden geliyor demektir
// 4. Savunma sistemini o yöne yönlendir

#include <stdio.h>

// en_guclu_sinyal FONKSİYONU
// Dizi içindeki en büyük değeri bulur.
// En güçlü sinyal = füzenin geldiği yön

int en_guclu_sinyal(int sinyaller[], int boyut) {
    int max = sinyaller[0];   // İlk değeri en büyük kabul et
    int max_index = 0;        // En büyük değerin dizideki yeri

    int i;
    for (i = 1; i < boyut; i++) {
        if (sinyaller[i] > max) {   // Daha büyük değer bulduk mu?
            max = sinyaller[i];     // Yeni en büyük değer
            max_index = i;          // Yeni en büyük değerin yeri
        }
    }
    return max_index;   // En güçlü sinyalin hangi sensörde olduğunu döndür
}

int main() {
    // 4 sensörün sinyal güçleri (dBm cinsinden)
    // Yüksek değer = güçlü sinyal = füze o yönden geliyor
    int sinyaller[4] = {45, 78, 32, 91};
    // sinyaller[0] = 45 → Kuzey sensörü
    // sinyaller[1] = 78 → Güney sensörü
    // sinyaller[2] = 32 → Doğu sensörü
    // sinyaller[3] = 91 → Batı sensörü

    char *yonler[4] = {"Kuzey", "Guney", "Dogu", "Bati"};
    // Sensör indeksine karşılık gelen yön isimleri

    int tehlikeli_yon; // En güçlü sinyalin geldiği yön

    printf("=== FÜZE SAVUNMA SİSTEMİ ===\n\n");

    // Tüm sensörlerin değerlerini ekrana yaz
    int i;
    for (i = 0; i < 4; i++) {
        printf("%s sensörü sinyal gücü: %d dBm\n", yonler[i], sinyaller[i]);
    }

    // En güçlü sinyalin hangi sensörde olduğunu bul
    tehlikeli_yon = en_guclu_sinyal(sinyaller, 4);

    printf("\n=== TESPİT RAPORU ===\n");
    printf("En güçlü sinyal: %s yönü (%d dBm)\n",
           yonler[tehlikeli_yon], sinyaller[tehlikeli_yon]);
    printf("UYARI! Füze %s yönünden geliyor!\n", yonler[tehlikeli_yon]);
    printf("Savunma sistemi %s yönüne yönlendiriliyor...\n", yonler[tehlikeli_yon]);

    return 0;  // Program hatasız bitti
}
