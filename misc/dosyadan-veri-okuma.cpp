#include <iostream>
#include <fstream> // dosya okuma yazma için (ifstream)
#include <vector> // STL kütüphanesi
using namespace std;

int main() {

	ifstream ornekDosya; // ifstream modunda dosya nesnesi oluşturuldu.
	ornekDosya.open("Ornek2.txt", ios::in);
	int puan;
	vector<int>puanlar; // STL kütüphanesi vector tanımlandı.
	for(int i = 0; i < 10; i++) {
		ornekDosya >> puan; // Dosyadan değer okunup puana atandı.
		puanlar.push_back(puan); // Vectorün sonuna bir eleman eklendi.
	}
	int toplam = 0;
	for (int j = 0; j < 10; j++) {
		toplam += puanlar[j]; // Vector içerisindeki tüm değerler toplandı.
	}

	double ortalama = toplam / 10.0;
	cout << "Sinif ortalamasi= " << ortalama << endl;
	ornekDosya.close(); // Açılan dosya kapatılır.

 return 0;
}
