#include <iostream>
#include <string> // string kütüphanesi tanımlanmak zorundadır.
using namespace std;


int main() {

	string ornekString = "Ilk String Tanımlama!"; // 21 karakterli string

	// klavyeden veya dosyadan metin okuyarak değer atanabilir.

	string ornekStringIki;
	cout << "String Veri tipi giriniz." << endl;
 	cin >> ornekStringIki;
	cout << ornekStringIki << endl;

	// ÜYE FONKSİYONLAR
	// 1. SIZE VE LENGTH = DEĞİŞKENİN BOYUTUNU ÖĞRENMEK AMACIYLA KULLANILIR.

	string sizeString = "String boyutu öğrenme.";
	cout << "'"  << sizeString << "'" << " stringinin boyutu şudur: ";
	cout << sizeString.size() << endl;
	cout << sizeString.length() << endl;

	// 2. RESIZE = STRING DEĞİŞKENİNİ YENİDEN BOYUTLANDIRIR.

	string resizeString = "Resize String boyutlandırma.";
	resizeString.resize(11);
	cout << resizeString.size() << endl << resizeString << endl;

	// 3. CAPACITIY = DEĞİŞKENİN KAPASİTESİNİ ÖĞRENMEK AMACIYLA KULLANILIR.

	string capacityString = "String ifadesinin kapasitesini öğrenme.";
	capacityString = "Deneme"; // derleyici 41 karakterli kapasite atamıştır.
	cout << capacityString.capacity() << endl;

	// 4. RESERVE = BÜYÜK BOYUTLU STRING DEĞİŞKENLERİNİ KÜÇÜLTMEKTE KULLANILIR
	// POZİTİF BİR TAM SAYI DEĞERİNİ PARAMETRE OLARAK ALIR!!!

	string reserveString;
	reserveString.reserve(64);
	cout << reserveString.capacity() << endl;

	// 5. CLEAR = String değişkeninin içeriğinin silinmesi amacıyla kullanılır

	string clearString = "String içeriği silme.";
	clearString.clear(); // herhangi bir parametreye ihtiyaç duymaz.
	cout << clearString << "" << clearString.length() << endl;

	// 6. EMPTY = String değişkeninin içeriğini boş olup olmadığını gösterir.
	// boolean ifade döndürür ve parametre gerektirmez.

	string emptyString;
	cout << emptyString.empty() << endl;
	emptyString = "Deneme.";
	cout << emptyString.empty() << endl;


 return 0;
}
