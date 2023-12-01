/*

#include <iostream>
using namespace std;

int main() {

	for(int i = 2; i<21; i+=2)
		cout << i << ",";
		cout << endl;
		return 0;
}

*/

// better version

#include <iostream>
using namespace std;

int main() {
    int maxValue = 98;  // Son iterasyonun değerini belirleyen değişken
    for (int i = 2; i < maxValue; i += 2) { // i maxValue degiskeninden kucuk ise sayi artar
        cout << i;
        if (i < maxValue - 2) { // eger i maxValue degerine ulasirsa, virgulun eklenmemesi icin son sayi
            cout << ",";
        }
    }
    cout << endl;
    return 0;
}