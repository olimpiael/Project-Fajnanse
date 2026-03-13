#include "../Inc/Osoba.h"

Osoba::Osoba() {
	cout << "Osoba constructor" << endl;
	imie_ = "";
	nazwisko_ = "";
	wiek_ = 0;
}

Osoba::Osoba(string a, string b, int c) {
	cout << "Osoba constructor" << endl;
	imie_ = a;
	nazwisko_ = b;
	wiek_ = c;
}