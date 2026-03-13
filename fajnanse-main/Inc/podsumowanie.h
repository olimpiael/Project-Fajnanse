#pragma once
#include <imgui.h>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <imgui-SFML.h>

class Podsumowanie {
public:
    Podsumowanie();
    void Render();
    void HandleEvents();
    void ShowSumWindow(bool show);
    std::function<void()> onClose;
    bool getShowSumWindow();

private:
 bool showSumWindow;
 };