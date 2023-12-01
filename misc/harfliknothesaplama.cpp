#include <iostream>
using namespace std;

int main() {
    char harfnotu;
    
    cout << "Harf Notunu Giriniz: ";
    cin >> harfnotu;

    switch (harfnotu) {
        case 'A':
            cout << "Ortalaman 91 ile 100 arasında" << endl;
            break;
        
        case 'B':
            cout << "Ortalaman 81 ile 90 arasında" << endl;
            break;
        
        case 'C':
            cout << "Ortalaman 71 ile 80 arasında" << endl;
            break;
        
        case 'D':
            cout << "Ortalaman 61 ile 70 arasında" << endl;
            break;
        
        case 'E':
            cout << "Ortalaman 0 ile 60 arasında" << endl;
            break;
        
        default:
            cout << "Harf notu bilinmiyor" << endl;
            break;
    }

    return 0;
}