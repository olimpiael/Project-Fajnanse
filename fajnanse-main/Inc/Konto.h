#pragma once
#include <iostream>
#include "Osoba.h"
#include "Wydatek.h"
using namespace std;

enum TypKonta {
	ADMIN,
	USER
};

enum Error_enum {
	OK,
	USER_EXISTS,
	EMAIL_EXISTS,
	INCORRECT_EMAIL,
	INCORRECT_PASSWORD,
	INCORRECT_LOGIN,
	INCORRECT_NAME,
	INCORRECT_SURNAME,
	INCORRECT_AGE,
	INCORRECT_SALDO
};

class Konto
{
	string login_;
	string haslo_;
	string email_;
	float saldo_;
	Wydatek** wydatki_;
    int ilosc_wydatkow_;


public:
	bool IsValid(string login, string pwd);
	bool Wyloguj();
	Konto();
	Konto(string a, string b, string c, float d, string imie, string nazwisko, int wiek);
	int NoweKonto(string a, string b, string c, float d, string imie, string nazwisko, int wiek);
	bool dodaj_pieniadze(float a);
	bool wydaj_pieniadze(float a);
	float get_saldo();
	void dodaj_wydatek(Wydatek a);
};
