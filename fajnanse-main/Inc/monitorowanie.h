#pragma once
#include <imgui.h>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <imgui-SFML.h>
enum ImGuiIconEnum
{
    ImGui_fa_camera_retro = 0xF083
};
class Monitorowanie {
public:
    Monitorowanie();
    void Render();
    void HandleEvents();
    void ShowMonitorWindow(bool show);
    std::function<void()> onClose;
    bool getShowMonitorWindow();

private:
 bool showMonitorWindow;
 float buttonSize = 25.0f;
 };