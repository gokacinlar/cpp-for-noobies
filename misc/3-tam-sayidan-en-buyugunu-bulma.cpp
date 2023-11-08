#include <iostream>
using namespace std;
// uc tam sayidan en buyugunu bulan program
// demonstration of intertwined if-else statements!!!

int main()
{

	int a, b, c, mak;
	cout << "3 Tam Sayi Giriniz: ";
	cin >> a >> b >> c;

	if (a > b)
	{
		if (a > c)
			mak = a;
		else
			mak = c;
	}

	else if (b > c)
		mak = b;
	else
		mak = c;

	cout << "En Buyuk Sayı: " << mak << endl;
}