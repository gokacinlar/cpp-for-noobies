#include <iostream>
using namespace std;
int KuvvetAl(int taban, int kuvvet)
{
	int sonuc = 1;
		for (int i = 1; i <= kuvvet; i++)
		sonuc = sonuc * taban;
	return sonuc;
}

int main()
{
	int yazdir1;
		yazdir1 = KuvvetAl(3, 4);
		cout << "3 4. kuvveti= " << yazdir1;

	int yazdir2 = KuvvetAl(4, 2);
		cout <<endl << "4 un karesi= " << yazdir2;

	int sayi1 = 5, kuvvet1 = 4;
	int yazdir3 = KuvvetAl(sayi1, kuvvet1);

	cout << endl << "sonuc " << yazdir3<<endl;

		if (KuvvetAl(4, 5) > KuvvetAl(5, 4))
		cout << "4 un 5. kuvveti, 5 in 4. kuvvetinden buyuktur";
		else

	cout << "4 un 5. kuvveti, 5 in 4. kuvvetinden kucuktur";
	cout << endl;

	int i;
		for (i = 1; i <= KuvvetAl(2, 3); i++)
		{
		cout << i << " ";
		}
	return 0;
}
