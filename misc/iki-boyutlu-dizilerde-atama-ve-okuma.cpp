#include <iostream>
using namespace std;

// İki boyutlu dizilerde atama ve okuma
// Şehirlere göre girilen sıcaklıkları gösteren program


const int SEHIR = 2; 
const int HAFTAGUN = 7;

int main() {

	int sicaklik[SEHIR][HAFTAGUN];
	cout <<"Her bir şehirde haftanın günlerine ait sıcaklık değerlerini giriniz. \n";
	// 1. Sıcaklık değerleri giriliyor
	for (int i = 0; i < SEHIR; ++i) {
		for (int j = 0; j < HAFTAGUN; ++j) {
			cout << "Sehir" << i + 1 << ",gün" << j + 1 << ":";
			cin >> sicaklik [i][j];
		}
	}
	cout<< "\n\n Değerler Gösteriliyor:\n";

	// 2. Sıcaklık dizisinden değerler okunuyor.
	for (int i = 0; i < SEHIR; ++i) {
		for (int j= 0; j < HAFTAGUN; ++j) {
			cout << "Sehir " << i + 1 << "," << "Gün " << j + 1 << " = " << sicaklik [i][j] << endl;
		}
	}
}
