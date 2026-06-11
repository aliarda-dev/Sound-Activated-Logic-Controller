# 🔊 Sound Activated Logic Controller

Bu proje, Akdeniz Üniversitesi Elektrik-Elektronik Mühendisliği bünyesindeki gömülü sistemler çalışmalarıma temel teşkil eden, ses tabanlı akıllı kontrol teknolojilerinin bir prototipidir. Çalışma kapsamında, akustik sinyallerin dijital mantığa dönüştürülmesi ve tanımlı durumlara göre otonom bir LED yönetimi gerçekleştirilmiştir.

---

### 🛠️ Sistem Mimarisi ve Donanım Bileşenleri
* **Mikrokontrolcü:** Arduino Uno
* **Sinyal Girişi:** Ses Algılama Sensörü (Sound Sensor)
* **Kontrol Birimi:** Çoklu LED Grubu (Kırmızı, Sarı, Yeşil)
* **Yazılım Mimarisi:** C Programlama, Non-blocking I/O

---

### ⚙️ Teknik Çalışma Prensibi
Sistem, fiziksel dünyadaki ses verisini mantıksal bir işleme tabi tutmak için şu aşamaları izler:
* **Sinyal Tetikleme (Triggering):** Sensör üzerinden alınan ses dalgaları, eşik değer (threshold) kontrolü ile dijital sinyale dönüştürülür.
* **Debounce Filtreleme:** Sinyal sıçramalarını (noise) engellemek amacıyla 200ms'lik bir zaman filtresi uygulanarak yanlış tetiklemeler minimize edilir.
* **Durum Yönetimi (State Management):** Tanımlı zaman aralıklarında (1s) gelen alkış sayıları, `switch-case` yapısı ile farklı lojik durumlara atanır.
* **Zamanlama (Non-Blocking):** `delay()` komutu yerine `millis()` fonksiyonu kullanılarak sistemin sürekli reaktif kalması sağlanır.

---

### 📖 Mühendislik Kazanımları ve Analiz
* **Gömülü Yazılım Mimarisi:** `main()` ve `init()` kullanımıyla kütüphane bağımsız, düşük seviyeli (low-level) donanım erişimi ve C programlama pratikleri.
* **Bellek Yönetimi:** `pointer` (işaretçi) kullanımıyla verinin doğrudan hafıza adresleri üzerinden güncellenmesi ve kaynak optimizasyonu.
* **Algoritmik Düşünce:** Zaman tabanlı bir durum makinesi (State Machine) tasarımı ile çoklu görev (multi-tasking) mantığının kavranması.

---

### 💡 Gelecek Vizyonu (Scalability)
Bu proje, ev otomasyonu sistemlerinde sesli komut işleme ve endüstriyel tetikleme mekanizmalarının temel mantığını simüle etmektedir. İleri aşamada ses şiddetine göre LED parlaklığının PWM ile dinamik ayarlanması hedeflenmektedir.

---

### 🎥 Proje Demo
