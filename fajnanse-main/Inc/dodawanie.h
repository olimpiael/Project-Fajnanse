#pragma once
#include <imgui.h>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <imgui-SFML.h>

class Dodaj {
public:
    Dodaj();
    void Render();
    void HandleEvents();
    void ShowAddWindow(bool show);
    std::function<void()> onClose;
    bool getShowAddWindow();

private:
 bool showAddWindow;
 };