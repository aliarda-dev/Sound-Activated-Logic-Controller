//Sound Activated Logic Controller Project
//Ali Arda Kocabörek | Akdeniz EEE

#include <Arduino.h>


#define kirmizi_led 10
#define sari_led 3
#define yesil_led 5
#define sensor_pin 8

void ledYakici(int* ,unsigned long);


int main(void){

  unsigned long sonAlkisZamani=0;
  int alkis_sayisi=0;

  init();

  pinMode(kirmizi_led,OUTPUT);
  pinMode(sari_led,OUTPUT);
  pinMode(yesil_led,OUTPUT);
  pinMode(sensor_pin,INPUT);

  do{

    int sensorDegeri = digitalRead(sensor_pin);


    if(sensorDegeri==HIGH && millis()-sonAlkisZamani>200){ //Yapilan alkislari saydigimiz kisim,200 msden buyuk araliklarla yapinca alkis sayimiz arttiriliyor -

      alkis_sayisi++;

      sonAlkisZamani=millis();
    }

    ledYakici(&alkis_sayisi,sonAlkisZamani);



  }while(1);

  
}



void ledYakici(int* alkisSayi,unsigned long sonAlkis){ //Alkis sayisini pointer olarak alma sebebimiz degerini fonksiyon icerisinde degistirebilmek

  if(millis()-sonAlkis > 1000 && *alkisSayi > 0 ){ //Eger 1 saniyeden uzun bir surede ses alamazsak ledlerin yakilacagi kisma giriyoruz

    switch(*alkisSayi){

      case 1 :
        digitalWrite(kirmizi_led,HIGH);
        digitalWrite(sari_led,LOW);
        digitalWrite(yesil_led,LOW);
      
      break;

      case 2 :

        digitalWrite(kirmizi_led,LOW);
        digitalWrite(sari_led,HIGH);
        digitalWrite(yesil_led,LOW);
      
      break;

      case 3 :

        digitalWrite(kirmizi_led,LOW);
        digitalWrite(sari_led,LOW);
        digitalWrite(yesil_led,HIGH);
      
      break;

      case 4 :

        digitalWrite(kirmizi_led,LOW);
        digitalWrite(sari_led,LOW);
        digitalWrite(yesil_led,LOW);
      
      break;



      default : break;
    }

    *alkisSayi=0; //Dongu icinde surekli bastan hesaplanmasi icin bu esitlik gerekiyor
  }
  
}


