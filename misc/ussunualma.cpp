#include <iostream>
using namespace std;

int KuvvetAl(int sayi, int kuvvet)
{ 
    int sonuc = 1; 
    for (int i = 1; i <= kuvvet; i++)
    {
        sonuc = sonuc * sayi;
    }
    return sonuc;
}

int main()
{
    int yazdir1;
    yazdir1 = KuvvetAl(3, 4); 
    cout << "3'un 4. kuvveti= " << yazdir1;
}