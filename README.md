***Sound Activated Logic Controller***

Bu proje, ses tetiklemeli bir kontrol sistemi prototipidir. Mikrofon sensöründen alınan sinyal işlenerek, alkış gibi ani seslere göre LED'ler farklı durumlara geçirilir.

***Donanım***
- Arduino Uno
- Sound Sensor (mikrofon modülü)(FC-04)
- Kırmızı, Sarı, Yeşil LED'ler

---

***Nasıl Çalışır?***
- Sensörden gelen analog değer okunur
- Belirlenen threshold değeri aşılırsa tetikleme oluşur
- Yanlış tetiklemeleri azaltmak için 200ms debounce uygulanır
- 1 saniyelik zaman penceresinde algılanan alkış sayısına göre sistem durumu değiştirilir
- LED kontrolü switch-case yapısı ile gerçekleştirilir
- delay() yerine millis() kullanılarak sistem non-blocking şekilde çalışır

---

***Geliştirme Fikirleri***
- Adaptive threshold
- PWM ile ses şiddetine göre parlaklık kontrolü

---

***Not***

Projenin USB C 2.0 kullanılarak yapılacak halinin pcb tasarımı ve gerekli gerber dosyaları yüklendi. PCB tasarımı esnasında fark ettiğim bir eksiğim de şu oldu, analog veya dijital binleri arduino üzerine rastgele yerleştirmemek çünkü trace çekerken zorlanmama sebep oluyor.Ayrıca bu projenin pcb tasarımında gnd bakır düzlemini (GND Plane) kullandım.

- 🎥 Proje Demo
  
Projenin çalışma videosunu aşağıdan izleyebilirsiniz.


https://github.com/user-attachments/assets/4fc10618-45ed-4bd7-b765-5fb663c96ab2

-📷 Proje PCB Medyası

<img width="1168" height="897" alt="Sound-Activated-Logic-Controller4" src="https://github.com/user-attachments/assets/bd6d865a-5b81-44e1-b9be-67e84943170e" />



