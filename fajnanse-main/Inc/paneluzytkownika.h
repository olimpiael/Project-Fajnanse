#pragma once
#include "../Inc/monitorowanie.h"
#include "../Inc/planowanie.h"
#include "../Inc/podsumowanie.h"
#include "../Inc/dodawanie.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <imgui.h>
#include <imgui-SFML.h>

class PanelUzytkownika {
public:
    PanelUzytkownika();
    void Render(const std::string& username);
    void Show();  
    bool IsVisible() ;
    std::function<void()> onLogout;
    void showMonitor(bool isOpen);
    Monitorowanie monitorowanie;
    Planowanie planowanie;
    Podsumowanie podsumowanie;
    Dodaj dodawanie;
    bool getshowMonitor();
    void Wylacz();
    void Reset();
    
private:
    char textBuffer3[256];
    bool showWindow;
    bool showMonitorWindow;
    bool isMonitorWindowOpen;
    bool isPlanWindowOpen;
    bool isSumWindowOpen;
    bool isAddWindowOpen;
    };
