// 100'luk not'u harflik nota ceviren bir program -yet another noobie stuff!!!
// ortalama-hesapla.cpp

#include <iostream>

using namespace std;

int main() {

	int sınavsonucu, ortalama;
	
	cout << "Sınav Sonucu:\n" << endl;
	cin >> sınavsonucu;
	
	ortalama = sınavsonucu;
	
		if (ortalama > 90)
			printf("A ile geçti.");
		else if(ortalama > 80)
			printf("B ile geçti.");
		else if(ortalama > 70)
			printf("C ile geçti.");
		else if(ortalama > 50)
			printf("D ile geçti.");
		else if(ortalama < 50)
			printf("Kaldı.");

	return 0;
}
