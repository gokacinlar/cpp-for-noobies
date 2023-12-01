#include <iostream>
using namespace std;

int TamBol(int bolunen, int bolen)
{

	return bolunen/bolen;

}

double KesirliBol(double bolunen, double bolen)
{

	return bolunen/bolen;

}

bool OndalikVarMi(double bolunen, double bolen)
{

	double sonuc = bolunen/bolen;
	double toplam = (int)sonuc; //double toplam=static_cast<int>(sonuc);
	if(toplam == sonuc)
		return true;
	else
		return false;
}

void FonksiyonaGonderileniYaz(int a, double b, bool c) 
{

	cout << endl << a <<" "<<b<<" "<<c;
}

int main()
{

	int yazdir1;
	yazdir1 = TamBol(9,4);
	cout << "sonuc1: "<<yazdir1<<endl;

	int yazdir2 = KesirliBol(9,4);
	cout << "sonuc2: "<<yazdir2<<endl;

	int sayi1 = 8, sayi2 = 19;
	if (OndalikVarMi(sayi2, sayi1))
		cout <<"Tam Bolme";
	else
		cout <<"Kesirli Bolme";
	int param1 = 4;
	double param2 = 2.3;
	bool param3 = true;
	FonksiyonaGonderileniYaz(param1, param2, param3);
	return 0;
}
