#include "../Inc/planowanie.h"



Planowanie::Planowanie() : showPlanWindow(false), moneyInputBuffer(0.0f), categoryAmount(0.0f), showConfirmButton(false), showConfirmMoneyButton(false), showMoneyInput(true), EditButton(false){ 
}

void Planowanie::Render() {
    if (showPlanWindow) {
        ImGui::Begin("Okno Planowania", &showPlanWindow);
        ImGui::TextColored(ImVec4(1.0f, 1.0f, 0.0f, 1.0f), "Planowanie");
        
        ImGui::SetCursorPos(ImVec2(5, 65));
        ImGui::Text("Budzet na miesiac:");

       if (showMoneyInput) {
        ImGui::InputFloat("##MoneyInput", &moneyInputBuffer, 10.0f, 100.0f, "%.2f", ImGuiInputTextFlags_AllowTabInput);  
       } 
         if (ImGui::Button("Zatwierdz kwote")) {
            moneyInputs.push_back(moneyInputBuffer);
            showConfirmMoneyButton = true; 
            showMoneyInput=false;
            }

        ImGui::Separator();
        ImGui::Text("Aktualna kwota na miesiac: %.2f", moneyInputBuffer);

          if (ImGui::Button("Dodaj kategorie")) {
            showCategoryInput = !showCategoryInput; 
            showConfirmButton = true;
        }


        
        if (showCategoryInput) {
            ImGui::InputText("##CategoryName", categoryName, sizeof(categoryName));
            ImGui::InputFloat("##CategoryAmount", &categoryAmount, 10.0f, 100.0f, "%.2f", ImGuiInputTextFlags_AllowTabInput); 
            }
         if (showConfirmButton &&ImGui::Button("Zatwierdz")) {
            categories.push_back(std::make_pair(std::string(categoryName), categoryAmount));
            categoryAmount = 0.0f;
            strcpy(categoryName, "");
        }


        
        ImGui::Separator();
        ImGui::Text("Dodane kategorie:");

        for (const auto& category : categories) {
            ImGui::Text("%s", category.first.c_str());
            ImGui::Text("%.2f", category.second);  
            ImGui::Separator();

        }

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


void Planowanie::ShowPlanWindow(bool show) {
    showPlanWindow = show;
}
 bool Planowanie::getShowPlanWindow(){
    return showPlanWindow;
 }