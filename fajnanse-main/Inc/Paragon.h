#pragma once

#include <string>

using namespace std;

enum TypPlatnosci {
	KARTA,
	GOTOWKA
};

enum TypWydatku {
	ARTYKULY_SPOZYWCZE,
	ARTYKULY_PRZEMYSLOWE,
	ARTYKULY_DOMOWE,
	ARTYKULY_OSOBISTE,
	ARTYKULY_REKREACYJNE,
	ARTYKULY_INNE
};

enum TypPrzychodu {
	WYNAGRODZENIE,
	ODSETKI,
	DYWDENDY,
	POZYCZKA,
	DAROWIZNA,
	SPRZEDAZ,
	INNE
};

enum TypKategorii {
	WYDATKI,
	PRZYCHODY
};
class Paragon {
public:
    Paragon();
    Paragon(string name);
    void setName(string name);
    string getName();
    string paragonData;
private:
    string name;  
};