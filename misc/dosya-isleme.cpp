#include <iostream> // cin ve cout kütüphanesi
#include <fstream> // dosya okuma kütüphanesi (ofstream)
using namespace std;

// Dosyaya yazma işlemlerini ofstream, okuma işlemlerini ifstream nesnesi yapmaktadır.

int main() {

	ofstream ornekDosya; // ofstream tipinde yeni bir dosya nesnesi oluşturulur.
	ornekDosya.open("Ornek2.txt", ios::out); // Dosya açılır.
	// ios::out modu dosyayı yazmak için açar.
	int puan;
	for(int i = 0; i < 10; i++) { // 10 iterasyon'da öğrenci sayısı kadar çalışır.
		cout << "Öğrenci puanını giriniz: ";
		cin >> puan; // Her iterasyonda bir öğrenci notu girilir.
		cout << endl; // konsolda imleci alt satırdan başlatır.
		ornekDosya << puan << endl;
	}
	ornekDosya.close(); // Açılan dosya kapatılır.
 return 0;
}
