#pragma once
#include <imgui.h>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <imgui-SFML.h>

class Planowanie {
public:
    Planowanie();
    void Render();
    void HandleEvents();
    void ShowPlanWindow(bool show);
    std::function<void()> onClose;
    bool getShowPlanWindow();

private:
    bool showPlanWindow;
    float moneyInputBuffer;
    float planMoney;
    bool isValidMoneyInput;
    bool shouldCloseWindow;
    bool showCategoryInput;
    char categoryName[256]; 
    char moneyAsText[256];
    std::vector<float> moneyInputs; 
    bool showConfirmMoneyButton;
    bool showMoneyInput;
    float categoryAmount;
    bool showConfirmButton;
    bool EditButton;
    std::vector<std::pair<std::string, float>> categories;
 };