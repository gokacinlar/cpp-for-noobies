#include <iostream>
using namespace std;
// break deyimi 

int main(){

	int i;
	for(i=0; i<5; i++) 
		{
			if(i==2)
				break;
			cout <<i<< endl;
		}
		cout << "i degeri \""<<i<< "\" iken donguden cikildi"<< endl;
}
