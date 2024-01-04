#include <iostream>
using namespace std;

// lineer sıralamadan farklı olarak seçmeli sıralama kullanılır.
// listenin en küçük sayısından başlayarak büyüğüne göre sıralanır.

void SecmeliSiralama (int *siraDizi, int boyut) {

	int i, enKucuk, enKucukYer;

	for(i = 0; i<boyut; i++) {

	enKucuk = siraDizi[i];
	enKucukYer = i;

	for (int j = i; j < boyut; j++) {
			if(siraDizi[j]<enKucuk) {
				enKucuk = siraDizi[j];
				enKucukYer = j;
			}
		}

	siraDizi[enKucukYer] = siraDizi[i];
	siraDizi[i] = enKucuk;

	}

}

int main() {
	int dizi[10] = {13,5,6,33,64,83,85,23,67,46};
	SecmeliSiralama(dizi, 10);
	for (int i = 0; i < 10; i++) {

	cout << dizi[i] << " ";
	cout << endl;
	}
 return 0;
}
