#include <iostream>
using namespace std;

int main() {
    int m, n;

    // Kullanıcıdan matris boyutlarını al

    cout << "Matrisin satir sayisini giriniz: ";
    cin >> m;
    cout << "Matrisin sutun sayisini giriniz: ";
    cin >> n;

    // Matrisi tanımla

    int matris[m][n];

    // Kullanıcıdan matris elemanlarını al

    cout << "Matris elemanlarini girin:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "matris[" << i << "][" << j << "]: ";
            cin >> matris[i][j];
        }
    }

    // Satırların çarpımını hesapla

    int satirlarCarpimi = 1;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            satirlarCarpimi *= matris[i][j];
        }
    }

    // Sütunların toplamını hesapla

    int sutunlarToplami[n] = {0};
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            sutunlarToplami[j] += matris[i][j];
        }
    }

    // Farkı hesapla

    int fark = satirlarCarpimi - sutunlarToplami[0];
    for (int j = 1; j < n; j++) {
        fark -= sutunlarToplami[j];
    }

    // Sonucu ekrana yazdır

    cout << "Satirların carpımı ile sutunlarin toplamı arasindaki fark: " << fark << endl;

    return 0;
}
