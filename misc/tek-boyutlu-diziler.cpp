#include <iostream>
using namespace std;

int main() {
	// bu kod, dizinin bellekteki konumunu gösterecektir.
	int ornekDizi [5] = {1,2,3,4,5};
	cout << ornekDizi << endl;

	int ikinciDizi [4] = {1,2,3,4};
	ikinciDizi[2] = 0;

	// dizideki elemanları değiştirmek için indis[x-1] fonksiyonunu unutma.
	// ikinciDizi'deki 2. elemanı değiştirdik. Şu andaki değeri 0;
	// değişecek sayı 3'tür çünkü diziler "0'dan başlar"!!!

	// DİZİNİN TÜM ELEMANLARINA ERİŞMEK

	int ucuncuDizi [6] = {1,2,3,4,5,6};
	int sayac;
	cout << "Dizi Elemanları Yazdırılıyor!" << endl;
	for (sayac = 0; sayac < 6; sayac++) {
		cout << "ucuncuDizi["<<sayac<<"]="<<ucuncuDizi[sayac]<< endl;
	}

	// DİZİ DEĞERLERİNİN KULLANICIDAN ALINMASI

	int dorduncuDizi [3] = {1,2,3};
	int sayac2;
	cout << "DİZİ DEĞERLERİNİN KULLANICIDAN ALINMASI" << endl;
	for (sayac2 = 0; sayac2 < 3; sayac2++) {
		cout << "dorduncuDizi["<<sayac2<<"]=";
		cin >> dorduncuDizi[sayac2];
	}
	cout << "DİZİ ELEMANLARININ YAZDIRILMASI" << endl;
	for (sayac2 = 0; sayac2 < 3; sayac2++) {
		cout << "dizi["<<sayac<<"]="<<dorduncuDizi[sayac2]<<endl;
	}

	// KARAKTER DİZİLERİ

	char karakterDizisi[20]="deneme"; // 20'den fazla karakterde abort olur
	cout << karakterDizisi<<endl;

	cin >> karakterDizisi;

	cout << karakterDizisi << endl;

	karakterDizisi[8] = '\0'; // \0 sonlandırma karakteri, null terminator,
				  // diziyi sonlandırmak için kullanılır.

	cout << karakterDizisi;


return 0;
}















