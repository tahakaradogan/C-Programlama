// GUN 5 KOD 1
// SENARYO: Bir endüstriyel sistemde motor var
// motor üzerinde encoder sensörü bulunuyor.
// encoder sensörü moturun kaç RPM (Saniyede dönüş sayısı) olduğunu söylüyor.
// sistem bu değeri okuyup motorun durumunu kontrol ediyor.
// NOT: gerçek kart olmadığı için encoder değeri kendim belirledim.
// Gerçek sistemde: int motor_hiz = encoder_oku();
//
// ALGORİTMA
// 1. PROGRAM BAŞLASIN
// 2. Encoder sensöründen hız değerini oku, kutuya koy.
// 3. hız 0'dan büyük mü? > encoder dönüş sayıyor > motor çalışıyor.
// 4. hız 0'a eşit mi? > encoder dönüş saymıyor > motor durmuş
// 5. hız 0'dan küçük mü? > encoder geçersiz değer verdi > hata var
// 6. ekrana sonucu yazdır.
// 7. program bitsin.

#include <stdio.h>

int main() 
{    int motor_hiz = 150 ;
    if (motor_hiz > 0) 
   { 
     printf("Motor Calisiyor. Hiz: %d RPM\n",motor_hiz);
   }

   else if (motor_hiz == 0) 
   { 
     printf("Motor durmus.\n");
   }

   else { 
     printf("HATA! Gecersiz Hiz Değeri: %d\n", motor_hiz);
   }

 return 0;

}
   
