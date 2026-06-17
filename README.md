🔊 Sound Activated Logic Controller

Bu proje, ses tetiklemeli bir kontrol sistemi prototipidir. Mikrofon sensöründen alınan sinyal işlenerek, alkış gibi ani seslere göre LED'ler farklı durumlara geçirilir.

🛠️ Donanım
- Arduino Uno
- Sound Sensor (mikrofon modülü)
- Kırmızı, Sarı, Yeşil LED'ler

⚙️ Nasıl Çalışır?
- Sensörden gelen analog değer okunur
- Belirlenen threshold değeri aşılırsa tetikleme oluşur
- Yanlış tetiklemeleri azaltmak için 200ms debounce uygulanır
- 1 saniyelik zaman penceresinde algılanan alkış sayısına göre sistem durumu değiştirilir
- LED kontrolü switch-case yapısı ile gerçekleştirilir
- delay() yerine millis() kullanılarak sistem non-blocking şekilde çalışır

📖 Teknik Notlar
- Zaman tabanlı state machine mantığı kullanıldı
- Non-blocking yapı sayesinde sistem sürekli giriş dinleyebilir
- Gürültüye karşı basit filtreleme (debounce) uygulanmıştır

⚠️ Limitasyonlar
- Gürültülü ortamlarda false trigger oluşabilir
- Sabit threshold kullanıldığı için adaptif değildir

💡 Geliştirme Fikirleri
- Adaptive threshold
- Moving average filtre
- PWM ile ses şiddetine göre parlaklık kontrolü

- 🎥 Proje Demo
Projenin çalışma videosunu aşağıdan izleyebilirsiniz.


https://github.com/user-attachments/assets/4fc10618-45ed-4bd7-b765-5fb663c96ab2


