#include <iostream>
#include <climits>
using namespace std;

int sayiBul(int maxDeger)
{
    int sayi;
    int maksimum = INT_MIN;

    for (int x = 0; x < maxDeger; x++)
    {
        cout << "Bir sayı giriniz: ";
        cin >> sayi;

        if (sayi > maksimum)
        {
            maksimum = sayi;
        }
    }

    return maksimum;
}

int main()
{
    int maxDeger;
    cout << "Kaç adet sayı gireceksiniz? ";
    cin >> maxDeger;

    int maksimumSayi = sayiBul(maxDeger);

    cout << "Girilen sayılar arasındaki maksimum sayı: " << maksimumSayi << endl;

    return 0;
}