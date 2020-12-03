# emils_lib
Genel kısayollar:
LOG(x) x'i ekrana yazdırır ve bi alt satıra geçer
LO(x) x'i ekrana yazdırır
rev(x) x boolean verisini ters çevirir
STOP sonsuz while döngüsüne alır

namespace el:
Kütüphanenin genel namespace'i
el'in altındaki namespacelerde ana fonksiyonlar ve değişkenler bulunmakta.

namespace Classic:
Çok bir olayı yok
swap(a,b)= a ve b'nin yerini değiştirir

namespace StrCalc:
Yazı işlemleri hakkında bir bölüm
glos(std::string) yazının kaç harfden oluştuğunu döndürür.
isContains(std::string a, std::string b) a yazısının içinde b yazısının olup olmadığını döndürür
whereContains(std::string a, std::string b) a yazısının içindeki b yazısı a yazısının kaçıncı harfinden itibaren başladığını döndürür
howManyContains(std::string a, char c) a yazısının içinde kaç tane c harfi olduğunu döndürür
getThats(std::string a, char b, int c) a yazısındaki c'inci b harfinin a'nın kaçıncı harfinde olduğunu döndürür.
getBetweenThat(std::string a, int b, int c) a yazısındaki b ve c nin arasındaki yeri döndürür
split(std::string a, char b) a yazısını b karakterine göre böler ve std::vector olarak döndürüş yapar
subtract(std::string a, std::string b) a yazısının içindeki b yazısını a yazısından çıkartır ve döndürür
pFor100(std::string a[100]) 100'lük string dizesinin ""'ye eşit olmayanlarını ekrana yazdırır
getN(std::string a, int b, int c) a yazısını b'li parçaları böler ve c'inci olanı döndürür
toInteger(char a) a karakterini rakama çevirir ve döndürür. Eğer rakam değilse -1 döndürür
isThisInt(std::string a) a yazısının sayı olup olmadığını kontrol eder
reverse(std::string a) a yazısını ters çevirir
toInteger(std::string a) a yazısını sayıya çevirir ve döndürür

namespace String:
Bu namespace şu anda işi StrCalc ve std::vector tarafından yapıldığı için aşırı gereksizdir

namespace Math:
Basit matematik işlemleri
factorial(int a) a!
absoluteValue(int,float,double a) |a|
hypotenuse(float a, float b) hipotenüs(a,b)
getNepos(int,flaot,double a) a -lerde bi sayıysa -1 +lardaysa +1 0 sa 0 döndürür
permutation(float a,float b) permutasyon
combination(float a,float b) kombinasyon
getBigger(int,flaot,double a, int,flaot,double b) a b'den büyükse a yı değilse byi döndürür

namespace Vectors:
Değişkenler Vector1 Vector2 Vector3
get(float x, float y, eğer Vector3 içinse bide float z) girilen veriye göre Vector2 veya Vector3 değişken döndürür
toVector2(Vector1/Vector3) vector2'ye çevirir
toVector3(Vector2/Vector1) vector3'e çevirir
Operatörler:
Vectorler birbirine eklenebilir, birbiriyle çarpılabilir, bölünebilir veya her hangi bir sayıyla çarpılabilirler veya bölünebilirler.
Vectorler << operatörüyle yazdırılabilirler
distance(a,b) a ve b vectorleri arası uzaklığı döndürür
vectorTenuse(a) bir noktası 0,0,0 olmak üzere diğer noktasını vector kabul ederek 2 nokta arası hipotenüsü döndürür
getVectorNepos(a) Math::getNepos'un Vector hali. Vector tipinden veri döndürür
where(a,b) b'nin a'nın neresinde olduğunu döndürür

namespace Geo:
Değişkenler 
angle Angle2
getAngle(float x, float y, angle angleD) bu verileri kullanarak Angle2 döndürür
Triangle2 3 tane angle verisi içeren değişken
getTriangle() getAngle'ın Triangle2 hali
getDiffAngle(Triangle2 a, Triangle2 b) 2 üçgen arasında farklı olan açıyı döndürür
Rectangle2 4 tane angle verisi içeren değişken
getRectangle(Angle2,Angle2,Angle2,Angle2) getTriangle'ın Rectangle2 hali
getRectangle(Triangle2 a, Triangle2 b) 2 üçgeni birleştirerek 1 Rectangle2 döndürür
getHypotenuse(Triangle2 a) a'nın hipotenüsünü döndürür
isTrue(Triangle2/Rectangle2) parametre olarak girilen değişkenin doğru bir geometrik şekil olup olmadığını kontrol eder

////////////Devamı sora
