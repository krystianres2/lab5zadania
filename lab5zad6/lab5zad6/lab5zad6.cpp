
#include <iostream>
using namespace std;
int main()
{
	string x;
	cout << "Podaj teskt: ", cin >> x;
	int y=0,z=0;
	for (char znak : x) {
		if ((znak == 'a') || (znak == 'e') || (znak == 'u') || (znak == 'i') || (znak == 'o') || (znak == 'y')) {
			y++;
		}
		else
			z++;
	}
	cout << "Liczba samoglosek: " << y << endl;
	cout << "Liczba spolglosek: " << z << endl;
}

