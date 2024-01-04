#include <iostream>
using namespace std;

int deger; // global degisken
int Ornek(int sonuc) // Ornek degiskeninde tanimlanan deger ile main'deki deger ayni isimde olsa da farkli yerlerden erisilmektedir. Eger "deger" yerine "sonuc" yazilsa kod calismaz. Bunun icin ayri bir int = deger isimli global degisken gerekmektedir.
	{
		deger = deger * 2;
		return deger;
	}

int main()
{
		// buradaki fonksiyon, Ornek fonksiyonunu cagirir ve global olarak deklare edilen degisken olan deger degiskeninde tanimlanan sayiyi, fonksiyondaki islevle tamamlar: 4*2
		deger = 4; // dikkat et de bir tane daha degisken tanimlama (int deger = 4) !!! 
		cout << "main deki deger="<<deger<<endl;
		cout << "fonksiyonun dondurdugu sonuc=" << Ornek(deger)<<endl;
		cout << "main deki deger=" << deger;
		cout << endl;
	return 0;;

}
