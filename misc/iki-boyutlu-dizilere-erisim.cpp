#include <iostream>
using namespace std;

int main() {

	int a[5][2] = {
		{0,0},
		{1,2},
		{2,4},
		{3,6},
		{4,8}
	};

	// iki boyutlu dizilere erişim için genellikle
	// iç içe iki for döngüsü kullanılır

	for (int i = 0; i < 5; i++) { // birinci dize üzerindeki for döngüsü
		for (int j = 0; j < 2; j++) { // ikinci dize üzerindeki for dögüsü
			cout << "a[" << i << "]["<< j << "]: ";
			cout << a[i][j] << endl; // dizi elemanına değer atama
		}
	}
 return 0;
}
