

#include <iostream>
using namespace std;

int main()
{
   // char string1[100];
    //cout << "Podaj tekst: ";
   // cin >> string1;
    //cout << "Tekst: " << string1 << endl;
    //char string2[100];
   // cout << "Podaj tekst: ";
   // cin >> string2; 
   //strcpy_s(string1, string2);
    //cout << string2 << endl;

    char string1[10] = "Cos ", string2[10] = "tam";
    strcat_s(string1, string2);
    cout << string1<<endl;
    cout << "rozmiar tablicy: " << size(string1); 

}

