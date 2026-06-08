// GUN 3 KOD 1
// SENARYO: Bir endustriyel sistemde sicaklik sensoru var.
// Sistem sıcaklığı okuyup kritik seviyeyi geçip geçmediğini kontrol ediyor.
// 80 derecenin üzerindeyse alarm veriyor.
// NOT: Gerçek kart olmadığı için sıcaklık değeri kendim belirledim.
// Gerçek sistemde: int sicaklik_sensoru = sensor_oku();

// ALGORITMA:
// 1. Program baslasin
// 2. Sicaklik degerini kutuya koy
// 3. Sicaklik 80 dereceden buyuk mu kontrol et
// 4. Buyukse ekrana alarm yaz
// 5. Program bitsin

#include <stdio.h>

int main() {
    int sicaklik_sensoru = 95;

    if (sicaklik_sensoru > 80) {
        printf("ALARM! Sicaklik kritik seviyede: %d derece\n", sicaklik_sensoru);
    }

    return 0;
}
