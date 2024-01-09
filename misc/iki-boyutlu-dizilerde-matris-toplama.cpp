#include <iostream>
using namespace std;

// İki boyutlu dizilerde matris toplama

int main() {

	/*
		1. r = rows, c= columns adında iki boyutlu dizinin elemanları tanımlanıyor
	*/

	int r,c,a[100][100], b[100][100], toplam[100][100], i, j;

	cout <<"Satır sayısını giriniz (1 ile 100 arasında): ";
	cin >> r;

	cout <<"Sütun sayısını giriniz (1 ile 100 arasında): ";
	cin >> c;

	cout << endl << "1. Matrisin elemanlarını giriniz:\n " << endl;

	// 1. Dizi dolduruluyor
	for (i = 0; i < r; ++i) {
		for (j = 0; j < c; ++j) {
			cout << "A dizisinin" << i + 1 << j + 1 << "elemanına değer girin: ";
			cin >> a[i][j];
		}
	}

	// 2. Dizi dolduruluyor

	cout << endl << "2. Matrisin elemanlarını giriniz:\n " << endl;

	for (i = 0; i < r; ++i) {
		for (j = 0; j < c; ++j) {
			cout << "B dizisinin" << i + 1 << j + 1 << "elemanına değer girin: ";
			cin >> b[i][j];
		}
	}

	// 3. Matrisler toplanıyor

	for (i = 0; i < r; ++i) {
		for (j = 0; j < c; ++j) {
			toplam[i][j] = a[i][j] + b[i][j];
		}
	}

	// 4. Sonuç Matrisi Ekrana Yazılıyor

	cout << endl << "Toplama Sonucu: " << endl;
	for(i = 0; i < r; ++i){
		for(j = 0; j < c; ++j){
		cout << toplam[i][j] << " ";
			if (j == c - 1)
				cout << endl;
		}
	}
}
