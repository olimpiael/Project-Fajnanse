#include "../Inc/Konto.h"
#include "../Inc/Osoba.h"
#include <iostream>
using namespace std;

/**
 * @brief Default constructor for the Konto class.
 * This constructor initializes a Konto object by calling the constructor of the Osoba class.
 */
Konto::Konto()
{
	Osoba(); // konstruktor klasy Osoba
}

/**
 * Dodaje podaną kwotę do salda konta.
 * @param a Kwota do dodania.
 * @return True, jeśli dodawanie powiodło się, False w przeciwnym razie.
 */
bool Konto::dodaj_pieniadze(float a)
{
	if (a < 0)
	{
		// nie można dodać ujemnej kwoty
		return false;
	}
	saldo_ += a; // dodawanie pieniędzy
	return true;
}

/**
 * Wydaje określoną ilość pieniędzy z konta.
 * @param a Ilość pieniędzy do wydania.
 * @return True, jeśli operacja wydania pieniędzy powiodła się, False w przeciwnym razie.
 */
bool Konto::wydaj_pieniadze(float a)
{
	if (a > saldo_)
	{
		// nie ma tyle pieniędzy
		return false;
	}
	else
	{
		saldo_ -= a; // wydawanie pieniędzy
		return true;
	}
}

float Konto::get_saldo()
{
	return saldo_; // wyświetlanie stanu konta
}

/**
 * @brief Creates a new account.
 *
 * @param a Login.
 * @param b Password.
 * @param c Email.
 * @param d Initial balance.
 * @param imie Name.
 * @param nazwisko Surname.
 * @param wiek Age.
 * @return Error code.
 */
int Konto::NoweKonto(string a, string b, string c, float d, string imie, string nazwisko, int wiek)
{
	// sprawdzanie poprawności danych
	if (a.length() < 5 || a.length() > 20)
	{
		return INCORRECT_LOGIN;
	}
	if (b.length() < 8)
	{ // podstawowe hasło ma mieć min 8 znaków, ale można ustawić dłuższe
		return INCORRECT_PASSWORD;
	}
	for (int i = 0; i < b.length(); i++)
	{ // sprawdzanie czy hasło zawiera małe i duże litery oraz cyfry
		if (b[i] >= 'a' && b[i] <= 'z')
		{
			break;
		}
		if (b[i] >= 'A' && b[i] <= 'Z')
		{
			break;
		}
		if (b[i] >= '0' && b[i] <= '9')
		{
			break;
		}
		return INCORRECT_PASSWORD;
	}

	if (c.length() < 5 || c.length() > 30)
	{ // prawdopodobnie nikt nie będzie miał więcej niż 30 znaków w emailu
		return INCORRECT_EMAIL;
	}
	if (imie.length() < 5 || imie.length() > 20)
	{ // prawdopodobnie nikt nie będzie miał więcej niż 20 znaków w imieniu
		return INCORRECT_NAME;
	}
	if (nazwisko.length() < 5 || nazwisko.length() > 20)
	{ // prawdopodobnie nikt nie będzie miał więcej niż 20 znaków w nazwisku
		return INCORRECT_SURNAME;
	}
	if (wiek < 0 || wiek > 150)
	{ // prawdopodobnie nikt nie będzie miał więcej niż 150 lat
		return INCORRECT_AGE;
	}
	if (d < 0)
	{	// nie można być winnym bankowi pieniędzy :D
		return INCORRECT_SALDO;
	}
	// jesli wszystko jest ok, to tworzymy nowe konto
	login_ = a;
	haslo_ = b;
	email_ = c;
	saldo_ = d;
	ilosc_wydatkow_ = 0;
	
	return OK;
}
void Konto::dodaj_wydatek(Wydatek a)
{
	wydatki_[ilosc_wydatkow_] = new Wydatek(a);
	ilosc_wydatkow_++;
}

/**
 * @brief Checks if the login and password are correct.
 *
 * @param login Login to check.
 * @param pwd Password to check.
 * @return True if the login and password are correct, False otherwise.
 */
bool Konto::IsValid(string login, string pwd)
{
	if (login == login_ && pwd == haslo_)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool Konto::Wyloguj()
{
	cout<<"Wylogowano"<<endl;
}
