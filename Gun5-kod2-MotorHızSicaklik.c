// GÜN 5 KOD 2
// SENARYO: Aynı endüstriyel sistem. 
// Motor üzerinde hem encoder sensörü hem sıcaklık sensörü var.         
// Encoder motorun kaç RPM (Dakikadaki Devir Sayısı) döndüğünü ölçüyor. 
// Sıcaklık sensörü motorun ısısını ölçüyor.
// Motor çalışıyorsa sıcaklık normalse sistem iyi.
// Motor çalışıyor ama aşırı ısınıyorsa uyarı ver.
// Motor durmuşsa alarm ver.
// Gerçek sistemlerde motor hem hız hem sıcaklık açısından aynı anda izlenir.
// NOT: Gerçek kart olmadığı için değerleri kendim belirledim.
// Gerçek sistemde : int motor_hiz = encoder_oku();
//                   int motor_sicaklik = sicaklik_sensoru_oku();
//
//
// ALGORİTMA
// PROBLEM: Motor hızını ve sıcaklığını aynı anda kontrol et.
// 
// ADIMLAR:
// 1. Program başlasın
// 2. encoder sensöründen hız değerini kutuya koy 
// 3. sıcaklık sensöründen sıcaklık değerini kutuya koy
// 4. Motor çalışıyor mu VE sıcaklık normal mi "Sistem İyi" yaz
// 5. Motor Çalışıyor ama sıcaklık 80 üzerinde mi "Aşırı ısınma uyarısı ver"
// 6. Motor durmuş mu? "Alarm ver"
// 7. Program bitsin.

#include <stdio.h>

int main(){ ;
    int motor_hiz = 150;
    int motor_sicaklik = 95;

    if (motor_hiz > 0 && motor_sicaklik < 80) 
       {
        printf("Sistem Normal. \nHiz: %d RPM  \nSicaklik: %d derece\n", motor_hiz , motor_sicaklik);
       }
else if (motor_hiz > 0 && motor_sicaklik >= 80)
      {
       printf("UYARI! Motor Aşiri Sicak. Sicaklik: %d derece\n" , motor_sicaklik);
      }

else {
      printf("ALARM! Motor Durdu. hiz= %d RPM \n", motor_hizi);
     }

  return 0 ;

}
      









