#include <fstream>
using namespace std;

/* Rastgele erişimli dosya yöntemi kullanarak
   alfabe.txt dosyasındaki baştan üçüncü elemanın
   yerini (C), X ile değiştiren, ardından bulunduğu
   konuma geri giderek baştan ikinci karakteri (B)
   okuyan ve sondan ikinci elemanın (E) yerine bu karakteri
   atayan bir C++ programı
*/

int main() {

	char karakter; // dosyadan okuma yapıldığında kullanılacak char değişkeni
        fstream dosyaIsleme; // Dosya yazma nesnesi
        dosyaIsleme.open("alfabe.txt"); // 1. Alfabe.txt dosyası oluşturuldu
        dosyaIsleme.seekp(2L, ios::beg); // 2. Dosya işaretçisi ilk satıra konumlandı
        dosyaIsleme << 'X'; // 3. Üçüncü karakter yerine X yazıldı
        dosyaIsleme.seekg(-2L, ios::cur); // 4. İşaretçi Mevcut konumda tutuldu
        dosyaIsleme >> karakter; // 5. Baştan ikinci karakter dosyadan okunur
        dosyaIsleme << karakter; // 6. Sondan ikinci karakter yerine okunan eleman yazılır.
        dosyaIsleme.close();

 return 0;
}
