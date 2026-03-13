#include "../Inc/podsumowanie.h"



Podsumowanie::Podsumowanie() : showSumWindow(false) {
}

void Podsumowanie::Render() {
    if (showSumWindow) {
        ImGui::Begin("Podsumowanie wydatkow", &showSumWindow);
        ImGui::TextColored(ImVec4(1.0f, 1.0f, 0.0f, 1.0f), "Podsumowanie");

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


void Podsumowanie::ShowSumWindow(bool show) {
    showSumWindow = show;
}
 bool Podsumowanie::getShowSumWindow(){
    return showSumWindow;
 }