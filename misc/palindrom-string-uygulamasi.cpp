#include <iostream>
#include <string>
#include <locale>
using namespace std;

// Mr. Handy!

int main() {

	setlocale(LC_ALL, "Turkish");
	string ornekString;
	cout << "Tek sayıda karakter uzunluğunda rakamlardan oluşan bir string girin." << endl;
	cin >> ornekString;

	int stringBoyutu = ornekString.length();
	bool palindromKontrol = true;
	for (int i = 0; i < (stringBoyutu - 1)/2; i++) {
		if (ornekString.at(i) != ornekString[stringBoyutu - i - 1]) {
			palindromKontrol = false;
			break;
		}
	}
	if (palindromKontrol == true) {
		cout << "İfade palindromdur." << endl;
	} else {
		cout << "İfade palindrom değildir." << endl;
	}
	ornekString.clear();
 return 0;
}
