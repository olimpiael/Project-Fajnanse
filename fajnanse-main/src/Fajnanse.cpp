#include "../Inc/Fajnanse.h"
#include <iostream>

using namespace std;

Fajnanse::Fajnanse(){
    ilosc_kont_ = 1;
    for (int i=0; i < MAX_KONT; i++){
        konta_[i] = Konto();
    }
    konta_[0].NoweKonto("admin", "admin", "admin@Fajnanse.com", 1000, "admin", "Fajnanse", 100);
}

// TODO: implement
bool Fajnanse::dodaj_konto(){
    if(ilosc_kont_ == MAX_KONT){ // nie można dodać więcej niż 5 kont
        return false;
    }

    ilosc_kont_++;
    return true;
}

int Fajnanse::get_ilosc_kont(){
    return ilosc_kont_;
}

bool Fajnanse::zaloguj(string login, string pwd){
    for(int i=0; i < ilosc_kont_; i++){
        if(konta_[i].IsValid(login, pwd)){
            return true;
        }
    }
    return false;
}

