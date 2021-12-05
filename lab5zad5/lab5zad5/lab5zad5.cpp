

#include <iostream>
using namespace std;
int main()
{
	char tab1[100], tab2[100], tab3[100], tab4[100];
	cout << "Podaj nazwe ulicy na ktorej mieszkasz: ";
	cin.getline(tab1, 100);
	cout << "Podaj nr domu: ";
	cin.getline(tab2, 100);
	cout << "Na ile oceniasz swoje umiejetnosci programowania w skali [2 - 5]: ";
	cin.getline(tab3, 100);
	cout << "Twoj staz programistyczny: ";
	cin.getline(tab4, 100);

	cout << "Adres: " << tab1 << tab2 << endl;
	cout << "Ocena: " << tab3-1<<endl;
	cout << "Staz: " << tab4 << endl;
}

