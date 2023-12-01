#include <iostream>
using namespace std;

int main() {

	int a=0, b=0;
	for (int i = 0; (a < 2) || (b < 4); i++)
	{
		a++;
	   b++;
			if(a <=2) {
				break;
			} else if (b <=4) {
				continue;
			}
	}
	cout << a <<", "<<b<<endl;
	
}