#include<iostream>
#include<vector>
using namespace std;

bool liczba = true;
vector<int> proba;
int a, b;
int main() {
	cout << "Ile liczb: ";
	cin >> b;


	for (int o = 0; o < b; o++) {		//dopisuje do vectoru tyle liczb podanych ile na początku chiał użytkownik( cin>>b)
		cin >> a;
		proba.push_back(a);
	}


	for (int i = 0; i < proba.size(); i++) {		//Wypisuje vector po kolei, Funkcja .size() pobiera wielkość vectoru)
		cout << endl << proba[i];
	}
	cout << endl;



	return 0;
}
