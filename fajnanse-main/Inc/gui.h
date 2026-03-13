#pragma once

#include "../Inc/Fajnanse.h"
#include "../Inc/monitorowanie.h"
#include <imgui.h>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <imgui-SFML.h>
#include "../Inc/paneluzytkownika.h"
using namespace std;

class GUI {
public:
    GUI(Fajnanse& fajnanse, sf::RenderWindow &window, PanelUzytkownika& panelUzytkownika);
    void Run();


private:
    sf::RenderWindow &window;
    PanelUzytkownika panelUzytkownika;
    sf::Clock deltaClock;
    std::string BufferImie;
    std::string BufferNazwisko;
    bool inUserPanel;
    Fajnanse core;
    Monitorowanie monitorowanie;
};