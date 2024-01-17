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

        ofstream dosyaIsleme; // Dosya yazma nesnesi oluşturuldu
        char alfabe[] = "ABCDEF"; // Char dizisi oluşturulup elemanlar atandı
        dosyaIsleme.open("alfabe.txt", ios::out);
        for (int i = 0; i < 6; i++) {
                dosyaIsleme << alfabe[i]; // Dosyaya altı adet eleman yazdırılır
        }
        dosyaIsleme.close(); // Açılan dosya kapatılır

 return 0;
}
