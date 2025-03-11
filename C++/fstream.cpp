#include <iostream>
#include <unordered_map>
#include <string>
#include <fstream>
using namespace std;

string nazwa, polecenie, linia, lok;
bool petla = true;
bool plik_lok;


int main() {
	unordered_map <string, int> Mapa = {
	{"odczyt", 1},
	{"zapis", 2},
	{"koniec", 4},
	{"nic", 5},
	{"lok", 6}
	};
	// Mapa poleceń
	fstream plik;
	//deklaracja obiektu plik
	while (petla) {
		plik.open("lok.txt", ios::in);
		if (plik.is_open()) {
			getline(plik, lok);
			plik.close();
			plik_lok = true;
		}
		else {
			plik_lok = false;
		}
		// lokalizacja folderu (wczytywanie z plkiu lok.txt
		cout << "---Menu---\n-odczyt\n-zapis\n-lokalizacja(lok)\n-koniec\n-wyczysc(nic)\n\n";
		cout << "Co chcesz zrobic: ";
		cin >> polecenie;
		cout << endl;
		switch (Mapa[polecenie]) {
		case 1:
			cout << "Nazwa pliku: ";
			cin >> nazwa;
			cin.ignore();
			cout << "------------------------------------------------" << endl;
			plik.open(lok + "\\" + nazwa + ".txt", ios::in);
			while (getline(plik, linia)) {
				cout << linia << endl;
			}
			plik.close();
			cout << "------------------------------------------------" << endl << endl;
			break;
		case 2:
			cout << "Nazwa pliku: ";
			cin >> nazwa;
			cin.ignore();
			cout << endl;
			plik.open(lok + "\\" + nazwa + ".txt", ios::app);
			while (linia != "stop") {
				getline(cin, linia);
				if (linia != "stop") {
					plik << linia << endl;
				}
			}
			plik.close();
			cout << endl << endl;
			break;
		case 4:
			petla = false;
			break;
		case 5:
			system("cls");
			break;
		case 6:
			if (plik_lok) {
				cout << "Lokalizacja istnieje\nJezeli chcesz podac nowa lokalizacje wpisz ja, jezeli nie wpisz spacje\nNowa lokalizacja: ";
				cin >> lok;
				if (lok != " " || lok != "") {
					plik.open("lok.txt", ios::out);
					plik << lok;
					plik.close();
				}
			}
			else if(!plik_lok) {
				cout << "Lokalizacja nie istnieje\nDomyslnie lokalizacja jest obok pliku .exe\nJezeli chcesz podać lokalizacje wpisz ja, jeżeli nie wpisz spacje\nNowa lokalizacja: ";
				cin >> lok;
				if (lok != " " || lok != "") {
					plik.open("lok.txt", ios::out);
					plik << lok;
					plik.close();
				}
			}
			break;
		}
	}
	return 0;
}
