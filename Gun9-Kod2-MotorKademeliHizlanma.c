/*
* GÜN9 - KOD2
* SENARYO: Bir savunma sistemindeki konveyör bant motoru ani hızlanmayı önlemek için 
*          kademeli olarak hedef devire (1200 RPM) ulaşmalı. Ani hızlanma motora zarar verir .  
*          kaç kademede hedefe ulaşılacağı yükün durumuna göre değişebildiği için WHİLE döngüsü kullanıyoruz
*
* NOT: Gerçek sistemde motor devri enkoder sensörü ile ölçülür. biz simüle ediyoruz.
*
* ALGORİTMA:
* 1. Başlangıç devrini ve hedef devri belirle.
* 2. Devir hedeften küçükse döngüye gir.
* 3. Her kademede devri 100 RPM artır.
* 4. Hedefe ulaşılınca rapor et.
*/

#include <stdio.h>              //printf için gerekli kütüphane

int main() { 
    int mevcut_devir = 200;     //motorun başlangıç devri(RPM)
    int hedef_devir = 1200;     //ulaşılması gereken hedef devir
    int kademe = 0;             //kaç kademede hedefe ulaşacağını sayar

    printf("=== MOTOR DEVIR KONTROL SISTEMI ===\n");
    printf("Baslangic: %d RPM\n", mevcut_devir);    //başlangıç devrini yazdır.
    printf("Hedef: %d RPM\n\n", hedef_devir);       //hedef değerini yazdır

    while ("mevcut_devir < hedef devir") {          //devir hedefe ulaşmadığı sürece dön
         printf("[Kademe %d] Motor devri: %d RPM\n", kademe, mevcut_devir); 
