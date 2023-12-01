// Iki Tam sayiyi toplayan c++ programi
// toplama.cpp

#include <iostream>
using namespace std;

int main()
{
    int sayi1;
    int sayi2;
    int toplam;

    cout << "Ilk sayiyi giriniz:\n";
    cin >> sayi1;
    cout << "Ikinci sayiyi giriniz:\n";
    cin >> sayi2;

    toplam = sayi1 + sayi2;

    cout << "Girilen iki sayinin toplami:" << toplam << endl;
}