# 🔨 Açık Artırma ve Ödeme Simülasyon Sistemi

Bu proje, C programlama dili kullanılarak geliştirilmiş, karmaşık veri yapılarını (`struct`) ve pointer mekanizmalarını temel alan bir açık artırma simülasyonudur. Sistem, katılımcıların tekliflerini analiz ederek kazananı belirler ve özel bir maliyet hesaplama algoritması çalıştırır.

## 🚀 Proje Hakkında
Bu yazılım, bir açık artırma sürecini dijital ortamda simüle eder. Projenin öne çıkan teknik özellikleri şunlardır:
- **Yapısal Veri Organizasyonu:** `Teklif`, `Artirma` ve `KazananTeklifSahibi` gibi özel veri yapıları ile veri akışı yönetilir.
- **Akıllı Ödeme Hesaplama:** Kazananın nihai ödeme miktarı, kendi teklifi ile diğer tüm katılımcıların tekliflerinin toplamı birleştirilerek hesaplanır.
- **Verimli Veri Aktarımı:** Fonksiyonlar arası veri paylaşımında pointer (işaretçi) kullanılarak bellek verimliliği sağlanmıştır.

### 🛠️ Kullanılan Programlama Yapıları
- `struct` & `typedef`: Karmaşık verileri gruplandırmak için.
- `for` döngüleri: En yüksek teklifi ve toplam maliyeti hesaplamak için.
- `printf` formatlama: Finansal verilerin (`double`) iki ondalık basamakla gösterilmesi için.

## 💻 Nasıl Çalıştırılır?
1. Kod dosyasını bilgisayarınıza `acik_arttirma.c` adıyla kaydedin.
2. Bir C derleyicisi (örneğin GCC) kullanarak derleyin:
   ```bash
   gcc acik_arttirma.c -o acik_arttirma
