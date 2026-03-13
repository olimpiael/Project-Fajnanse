#pragma once
#include "../Inc/Wydatek.h"
#include "../Inc/Konto.h"
#include "../Inc/Paragon.h"
#include <iostream>

using namespace std;

#define MAX_KONT 5

class Fajnanse{
    int ilosc_kont_;
    Konto konta_[MAX_KONT];
public:
    Fajnanse();
    int get_ilosc_kont();
    bool dodaj_konto();
    bool zaloguj(string login, string pwd);
};