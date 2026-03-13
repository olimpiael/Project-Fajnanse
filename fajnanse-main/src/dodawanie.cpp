#include "../Inc/dodawanie.h"



Dodaj::Dodaj() : showAddWindow(false) {
    
}

void Dodaj::Render() {
    if (showAddWindow) {
        ImGui::Begin("Dodaj wydadek", &showAddWindow);
        ImGui::TextColored(ImVec4(1.0f, 1.0f, 0.0f, 1.0f), "Dodaj wydtek");

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


void Dodaj::ShowAddWindow(bool show) {
    showAddWindow = show;
}
 bool Dodaj::getShowAddWindow(){
    return showAddWindow;
 }