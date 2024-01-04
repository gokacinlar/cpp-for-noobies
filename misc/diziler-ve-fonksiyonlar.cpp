#include <iostream>
using namespace std;

void DiziyiYazdir(int fonksiyonDizi[],int diziBoyutu) { 

	int i; for (i = 0; i < diziBoyutu; i++) {
		cout << fonksiyonDizi[i] << "" << endl;
	}
}

	// YUKARIDAKI FONKSİYON MAIN'DE ÇAĞRILIR VE GİRİLEN SAYI KADAR DİZİYİ YAZDIRIR
	// PARANTEZ İÇİNE, İ EKLENİR ÇÜNKÜ GİRİLEN DİZİYE KADAR ARTIRILMASI İÇİN
	// FOR DÖNGÜSÜNE GEREK VARDIR


	// LİNEER ARAMA (dizinin tüm elemanlarını tarayarak arama)

int LineerArama(int *diziAra, int diziBoyut, int aranan) {

	int x;
	for (x = 0; x < diziBoyut < x++;) {
		if (aranan == diziAra[x])
			return x;
	}
	return -1;
}


int main() {

	int dizi[20] = {0,2,4,6,8,10,12};
	DiziyiYazdir(dizi, 5); // girilen sayıya kadar diziyi listeler

	int lineerDizi[10] = {1,13,5,2,9,10,34,63,2};
	int bul;
	int ara;
	ara = 9;
	bul = LineerArama(dizi,10,ara);
	if (bul != -1) {
	cout << "aranan eleman listenin" << bul << ". indisindedir.";
	} else {
	cout << "aranan eleman listede yok";
	}

 return 0;
}
