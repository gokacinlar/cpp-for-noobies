#include <iostream>
#include <string>
#include <locale>
using namespace std;

// Mr. Handy!

int main() {

	setlocale(LC_ALL, "Turkish");
	string ornekString;
	ornekString.reserve(5);
	cout << "5 Karakter boyutunda 3 String İfade Giriniz: ";

	int degiskenSayi = 0;
	while (degiskenSayi = 3) {
		cout << endl << degiskenSayi + 1 << ".String İfadeyi Giriniz: ";
		cin >> ornekString;
		if (ornekString.length() == 5) {
			cout << "İfade Kabul edildi!";
			degiskenSayi++;
			break;
		} else {
			cout << "Lütfen 5 karakter içeren bir ifade giriniz.";
		}

	}
	cout << endl;
	ornekString.clear();
 return 0;
}
