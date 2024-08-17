#**L298N Voltaj Regulatörlü Çift Motor Sürücü Kartı**#


![l298n-voltaj-regulatorlu-cift-motor-surucu-karti-10150-62-O](https://github.com/user-attachments/assets/3fbb4c4a-7b2c-4bcf-95f5-7af068429ede)

24V a kadar olan motorları sürmek için üretilen bu kart, iki kanallı olup kanal başına 2A akım verebilir. Bu kart iki kanallı olduğu için arabanın sağ tarafındaki 2 motoru bir kanala; sol tarafındaki motorları da diğer kanala bağlayacağız. İşimizi fazlasıyla görecektir.

**Arduino Arabamızın Elektronik Bağlantıları:**


![Bluetooth Modullu Arac_bb](https://github.com/user-attachments/assets/c40e70a6-b6c9-4682-a378-2aa68cad705c)

Bütün bağlantılarımızı yaptıktan sonra projemiz çalışmaya hazır bi halde olacak. Son görüntümüz de aşağıdaki görseldeki gibi olmalı

**NOT: Görsellerde iki tane pil yuvası olması kafa karıştırmasın. Pil yuvasından çıkan kabloya iki ek yaparak birini motor sürücüsüne diğerini Arduinoya bağladık.**

![araba-final](https://github.com/user-attachments/assets/4e770fdf-11a9-4fc3-8d61-982bcb224e8a)

Aracımız hazır. Şimdi de yazılım kısmına odaklanalım. Bu kısma geçmeden aracın güç bağlantılarını kesmeliyiz. Pillerden birini çıkartarak bunu yapabiliriz.

**Not: Kodu Arduinoya yüklerken HC-06 Bluetooth modülünün bağlantılarını sökmemiz gerekiyor aksi takdirde hata mesajları ile karşılaşacağız.**

