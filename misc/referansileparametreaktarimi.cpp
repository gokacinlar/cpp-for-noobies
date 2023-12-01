#include <iostream>
using namespace std;
// fonksiyondan fonksiyona bilgi aktarimi, degisken degerini digerine esitlemekle olur

// bunu isaretciler yardimiyla yapariz.

/* isaretciler

	& = herhangi bir degiskenin BASİNA yazildiginda, onun ADRESINI verir.
	int *a = a tam sayi degil, ADRES tutar
	a adresinde tutulan degeri ogrenmek icin, *a kullanılır

*/

void DegerleriDegistir(int *deger1, int *deger2)
{

	*deger1 = 5;
	*deger2 = 6;
	cout << endl << "fonksiyonun icindeyiz" << endl;
	cout <<"deger1 adresi="<<deger1<<endl;
	cout <<"deger2 adresi="<<deger2<<endl;
	
}

int main()
{

	int degis1=3, degis2=4;
	cout << "degis1=" << degis1<<endl;
	cout << "degis2=" << degis2<<endl;
	cout << "degis1 adresi=" << &degis1 << endl;
	cout << "degis2 adresi=" << &degis2 << endl;
	DegerleriDegistir(&degis1, &degis2);
	cout << endl << "fonksiyonun bitti,yazdirma main de" << endl;
	cout << "degis1=" << degis1 << endl;
	cout << "degis2=" << degis2 << endl;
	
}