#include <iostream>
#include "../Inc/Paragon.h"
#include "../Inc/gui.h"
#include "../Inc/Fajnanse.h"
#include "../Inc/Konto.h"
#include "../Inc/Osoba.h"
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <imgui.h>
#include <imgui-SFML.h>

#define Fajnanse_CORE_version "0.0.1"

int main() {
    sf::RenderWindow window;
    Fajnanse core;
    PanelUzytkownika panelUzytkownika;
    Monitorowanie monitorowanie;
    GUI gui(core, window, panelUzytkownika);
    gui.Run();

    return 0;
}