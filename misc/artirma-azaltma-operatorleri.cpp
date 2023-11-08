#include <iostream>
using namespace std;

int main() {

	// artirma operatoru

	int a = 10;
	cout << a << endl; //ekranda goruntulenen a degeri
	cout << "once artir operatoru kullanılırsa(++a, ++x)" << endl;
	cout << ++a << endl;
	cout << a << endl; //girilen deger once artarak gozukecektir
	cout << "***************************************************" << endl;
	a = 10;
	cout << a << endl; // ekranda on degeri goruntulenir
	cout << "sonra artir operatoru kullanılırsa(a++, x++)" << endl;
	cout << a++ << endl;
	cout << a << endl; // 10 degeri goruntulendikten sonra artirma islemi gerceklesir
	

}
