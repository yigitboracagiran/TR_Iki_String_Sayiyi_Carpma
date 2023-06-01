# LeetCode 43. Problem

![x](https://github.com/yigitboracagiran/TR_Iki_String_Sayiyi_Carpma/assets/111417887/93d844a7-5656-4b75-8e97-8213b98b1d78)

# Kod Hakkında

1- Bu kod; string olarak girilen iki sayıyı BASAMAK SAYISI fark etmeden çarpar ve sonucu ekrana yazdırır.

2- Bunun için öncelikle sayıların basamak sayısı ( n1 ve n2 ) bulunur.

3- Sonuç isimli string tipi değişken ( n1 + n2 ) boyutunda oluşturulur ve tüm elemanlarına "0" atanır.

Not: n1 + n2 olmasının sebebi, iki sayı çarpıldığında maksimum olacağı basamak sayısı ( n1 + n2 )'dir.

4- Sayılar çarpma işleminin mantığına göre çarpılır.

5- Eğer maksimum basamak sayısı ( n1 + n2 ) dolmadıysa, sonuç stringinde 0 kalmış olacağı için; 0 kaldı mı diye kontrol edilir, kaldıysa silinir ve sonuç stringi main fonksiyona döndürülür.

# Kodu Ubuntu'da Derleme ve Çalıştırma

1- Kodun olduğu dizine terminalde gidilir.

Ör: `cd Desktop/`

2- Kod derlenir.

Ör: `g++ ikiStringSayiyiCarpma.cpp -o ikiStringSayiyiCarpma`

3- Kod çalıştırılır.

Ör: `./ikiStringSayiyiCarpma`
