#include "../Inc/paneluzytkownika.h"
#include <imgui.h>

PanelUzytkownika::PanelUzytkownika() : showWindow(true), isMonitorWindowOpen(false) {
}

void PanelUzytkownika::Render(const std::string&username) {
if (showWindow) {
    
        ImGui::Begin("PANEL UZYTKOWNIKA", &showWindow);

        // Panel Tytulowy
        ImGui::TextColored(ImVec4(1.0f, 1.0f, 0.0f, 1.0f), "Panel Uzytkownika");

        
        
        std::string welcomeText = "Witaj, " + username + "!";
        ImGui::Text(welcomeText.c_str());
        std::cout<<username;
       ImGui::AlignTextToFramePadding();

            float buttonWidth = 150.0f;
            float columnPosX = ImGui::GetWindowSize().x - buttonWidth - 10.0f;

            ImGui::SetCursorPosX(columnPosX);

           
            if (ImGui::Button("Dodaj wydatek")) {
                dodawanie.onClose = [&]() {
                
                isAddWindowOpen = false; 
                };
            dodawanie.ShowAddWindow(true); 
           
            isAddWindowOpen = true; 
    
            }

             if(isAddWindowOpen){
               dodawanie.Render();
            }

            ImGui::SetCursorPosX(columnPosX);

            if (ImGui::Button("Planuj")) {
                planowanie.onClose = [&]() {
                
                isPlanWindowOpen = false; 
                };
            planowanie.ShowPlanWindow(true); 
           
            isPlanWindowOpen = true; 
    
            }
            if(isPlanWindowOpen){
            planowanie.Render();
            }


            ImGui::SetCursorPosX(columnPosX);
            
           if (ImGui::Button("Monitoruj")) {
                monitorowanie.onClose = [&]() {
                
                isMonitorWindowOpen = false; 
            };
            monitorowanie.ShowMonitorWindow(true); 
            
            isMonitorWindowOpen = true; 
            }

             if(isMonitorWindowOpen){
               monitorowanie.Render();
            }
    
           

            ImGui::SetCursorPosX(columnPosX);
            if (ImGui::Button("Podsumowanie")) {
                podsumowanie.onClose = [&]() {
                
                isSumWindowOpen = false; 
                };
            podsumowanie.ShowSumWindow(true); 
            
            isSumWindowOpen = true; 
    
            }

             if(isSumWindowOpen){
               podsumowanie.Render();
            }

           
            ImGui::SetCursorPosY(ImGui::GetWindowSize().y - ImGui::GetFrameHeightWithSpacing());
            ImGui::SetCursorPosX((ImGui::GetWindowSize().x - ImGui::CalcTextSize("Wyloguj").x) * 0.5f);

            if (ImGui::Button("Wyloguj")) {
                if (onLogout) {
                    onLogout();
                }
            }

            ImGui::End();
        }
}



  
void PanelUzytkownika::Show() {
    if(!isMonitorWindowOpen){
    showWindow = true;
    }
}

bool PanelUzytkownika::IsVisible(){
    return showWindow;
}
void PanelUzytkownika::showMonitor(bool isOpen) {
        isMonitorWindowOpen=isOpen;
        }
 bool PanelUzytkownika::getshowMonitor(){
    return isMonitorWindowOpen;
 }
 void PanelUzytkownika::Wylacz() {
   if(isMonitorWindowOpen){
    showWindow = false;
    }

 }
