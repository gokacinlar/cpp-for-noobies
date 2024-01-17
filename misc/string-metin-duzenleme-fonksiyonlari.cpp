#include <iostream>
#include <string>
using namespace std;

int main() {

	// 1. "+" ARTI OPERATÖRÜ

	string ornekString1 = "String ";
	string ornekString2 = "birleştirme.";
	string ornekString = ornekString1 + ornekString2;
	cout << ornekString << endl;

	// 2. "+=" ARTI EŞİTTİR OPERATÖRÜ

	string ornekString3 = "String ";
	string ornekString4 = "birleştirme.";
	ornekString3 += ornekString4;
	cout << ornekString3 << endl;

	// 3. APPEND ÜYE FONKSİYONU

	string ornekString5 = "String ";
	string ornekString6 = "ifadesi ekleme.";
	ornekString5.append(ornekString6);
	cout << ornekString5 << endl;

	// 4. PUSH BACK ÜYE FONKSİYONU
	// değişkenin sonuna herhangi bir karakter",", ".", ":" eklemek için kullanılır.

	string ornekString7 = "String Karakter Ekleme";
	ornekString7.push_back('.'); // tek tırnak kullanılır!!!
	cout << ornekString7 << endl;

	// 5. ASSIGN ÜYE FONKSİYONU
	/*
		Bu fonksiyon 3 parametre alır.
		1. parametre = string değişkeni veya tırnak içine yazılmış bir string ifadesi
		2. parametre = eklenecek ifadenin  hangi harfinden başlanacağını belirten sayı (0,1,2)
		3. parametre = 2. parametrede eklenen stringden kaç harfin ekleneceğini belitir

		örnek = ornekString.assign(ornekString 1,0,5);
	*/

	string ornekString8 = "String ifadesi atama.";
	string ornekString9 = "ifadesi atama.";
	ornekString8.assign(ornekString9, 0, 5);
	// ornekString9 1. parametre; 0 nereden başlayacağına dair birinci, 5 de nereye kadar
	// devam edeceğini gösteren parametre
	cout << ornekString8 << endl;

	// 6. INSERT ÜYE FONKSİYONU
	// dört ayrı parametre alır.

	string ornekString10 = "String ifadesi ekleme";
	string ornekString11 = " araya ";
	ornekString.insert(14, ornekString11);
	cout << ornekString10 << endl;
	// birinci parametre, eklenecek olan stringe hangi karakter sırasından ekleneceğini,
	// ikinci parametre eklenecek olan değişkeni
	// üçüncü parametre eklenecek olan string ifadenin hangi karakterden itibaren ekleneceğini
	// dördündü parametre eklenen stringden itibaren kaç karakter ekleneceğini belirtir.

	// 7. ERASE ÜYE FONKSİYONU

	string ornekString12 = "String ifadesi silme.";
	ornekString12.erase(7, 8); // birinci parametre, nereden silinmeye başlayacağını,
				// ikinci parametre ise ne kadar silineceğini belirtir.
	cout << ornekString12 << endl;

	// 8. REPLACE ÜYE FONKSİYONU
	// erase ve insert üye fonksiyonun birleştirilmiş halidir.
	// hem silmeye hem de birleştirmeye imkan tanır.


	/*
		5 farklı parametre alabilir. ilk 2 parametre silme, 3-5 eklemeyle ilgilidir.
		1. parametre = sınıf değişkeninin hangi karakterden itibaren silineceğini
		2. parametre = 1. parametreden itibaren kaç karakter silineceğini
		3. parametre = stringe eklenecek değişkenin adını
		4. parametre = eklenecek stringin hangi karakterden itibaren ekleneceğini
		5. parametre = eklenen stringin kaç karakterinin ekleneceğini belirtir.
	*/

	string ornekString13 = "String ifadesini sona ekleme.";
	string ornekString14 = "araya";
	ornekString13.replace(17, 4, ornekString14);
	cout << ornekString13 << endl;

	// 9. SWAP ÜYE FONKSİYONU
	// iki string değişkeninin yerini değiştirmek için kullanılır.

	string ornekString15 = "İlk String İfadesi";
	string ornekString16 = "İkinci String İfadesi";
	ornekString15.swap(ornekString16);
	cout << ornekString15 << endl; << ornekString16 << endl;

	// 10. SUBSTR ÜYE FONKSİYONU
	// string sınıfının değerini başka bir değişkene kopyalamak için kullanılır.

	string ornekString17 = "String kopyalama.";
	string ornekString18;
	ornekString18 = ornekString17.substr(0,6);
	// iki parametre alır:
	// 1. parametre = kopyalanacak string ifadesinin hangi karakterden başlayacağını
	// 2. parametre = kopyalanan ifadenin hangi karakter uzunluğunda olacağını ifade eder.
	cout << ornekString18 << endl;

 return 0;
}
