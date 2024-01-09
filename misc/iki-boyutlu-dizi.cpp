#include <iostream>
using namespace std;

int main() {

	/* iki boyutlu dizi syntaxi

		veri_tipi diziAdi [boyut1 - satır][boyut2 - sütun] = {
			{1,2,3}, => satır
			{4,5,6} => satır
			sütunlar

		*** SATIR SONUNA VİRGÜL EKLEMEYİ UNUTMA!
		}
	*/


	int a[3][4] = {

	{0,1,2,3},
	{4,5,6,7},
	{8,9,10,11}

	};
	cout << a << endl;
 return 0;
}
