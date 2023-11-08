#include <iostream>
#include <string>

using namespace std;

int main() {
    char harfnotu;

    while (true) {
        cout << "Lütfen harf notunu girin (A, B, C, D, E): ";
        cin >> harfnotu;

        switch (harfnotu) {
            case 'A':
                cout << "Ortalaman 91 ile 100 arası" << endl;
                break;
            case 'B':
                cout << "Ortalaman 81 ile 90 arası" << endl;
                break;
            case 'C':
                cout << "Ortalaman 71 ile 80 arası" << endl;
                break;
            case 'D':
                cout << "Ortalaman 61 ile 70 arası" << endl;
                break;
            case 'E':
                cout << "Ortalaman 0 ile 60 arası" << endl;
                break;
            default:
                cout << "Harf notu bilinmiyor" << endl;
                break;
        }

        char devam;
        cout << "Başka bir harf notu girmek ister misiniz? (E/H): ";
        cin >> devam;

        if (devam != 'E' && devam != 'e') {
            break;
        }
    }

    return 0;
}
