#include <iostream>
using namespace std;
int main() {

	double ondalikSayi = 3.55;
	bool kosul = true;
	char karakter = 'a';

	cout <<ondalikSayi<<""<<kosul<<""<<karakter;
	int sayi1, sayi2, sayi3;
	sayi1 = static_cast<int>(ondalikSayi);
	sayi2 = static_cast<int>(kosul);
	sayi3 = static_cast<int>(karakter);
	cout << endl <<sayi1<<""<<sayi2<<""<<sayi3<< endl;

}
