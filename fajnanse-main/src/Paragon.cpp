#include <iostream>
#include <fstream>

#include "../Inc/Paragon.h"
#include "../Inc/Fajnanse.h"

Paragon::Paragon() {
    std::cout << "Paragon constructor" << std::endl;
    cout << "Paragon constructor" << std::endl;
    string paragonData;
    // load out.txt file with OCR data
    ifstream inputParagon("out.txt");
    if (inputParagon.is_open()) {
        getline(inputParagon, paragonData);
        
        inputParagon.close();
        cout << "Paragon data: " << paragonData << endl;
    } else {
        cout << "Failed to open out.txt" << endl;
    }
}

Paragon::Paragon(string a) :name(a) {}//konstruktor

void Paragon::setName(string a) {//ustawia/zmienia nazwe
    name = a;
}
string Paragon::getName() {//funkcja zwraca nazwa
    return name;
}
  
