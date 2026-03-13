#include "../Inc/monitorowanie.h"



Monitorowanie::Monitorowanie() : showMonitorWindow(false) {
    
}

void Monitorowanie::Render() {
    if (showMonitorWindow) {
          ImGui::SetCursorPos(ImVec2(ImGui::GetWindowWidth() - 30, 5));
    if (ImGui::Button(" camera button")) {

        // Tutaj dodaj kod, który ma być uruchomiony po kliknięciu przycisku z ikoną kamery
    }
        ImGui::Begin("Okno Monitorowania", &showMonitorWindow);
        ImGui::TextColored(ImVec4(1.0f, 1.0f, 0.0f, 1.0f), "Monitorowanie");

        ImGui::SetCursorPosY(ImGui::GetWindowSize().y - ImGui::GetFrameHeightWithSpacing());
        ImGui::SetCursorPosX((ImGui::GetWindowSize().x - ImGui::CalcTextSize("Zamknij").x) * 0.5f);
            if (ImGui::Button("Zamknij")) {
            
            if (onClose) {
                onClose();
            }
        }
        ImGui::End();
    }
}


void Monitorowanie::ShowMonitorWindow(bool show) {
    showMonitorWindow = show;
}
 bool Monitorowanie::getShowMonitorWindow(){
    return showMonitorWindow;
 }