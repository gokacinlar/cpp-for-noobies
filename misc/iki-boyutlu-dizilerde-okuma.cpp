#include <iostream>
using namespace std;

int main() {

	// İKİ BOYUTLU DİZİLERDE OKUMA İŞLEMİ

	// 1. örnek diziyi tanımla
	int test [3][2] {

		{2, -5},
		{4, 0},
		{9, 1}

	};

	// 2. Birinci boyut üzerindeki (satır) for döngüsünü yaz
	for (int i = 0; i < 3; i++) {
		// 3. İkinci boyut (sütun) üzerindeki for döngüsünü yaz
		for (int j = 0; j < 2; j++) {
			// 4. Değerleri ekrana yazdır
			cout << "test[" << i << "][" << j << "] = " << test[i][j] << endl;
		}
	}
 return 0;
}
