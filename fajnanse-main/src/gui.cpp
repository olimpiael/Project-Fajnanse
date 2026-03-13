
#include "../Inc/gui.h"
#include "../Inc/monitorowanie.h"
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <imgui.h>
#include <imgui-SFML.h>

GUI::GUI(Fajnanse &fajnanse, sf:: RenderWindow &window, PanelUzytkownika &panelUzytkownika) : inUserPanel(false),core(fajnanse), window(window), panelUzytkownika(panelUzytkownika) {
    
    int resolutionX = 800;
    int resolutionY = 600;
    int bitsPerPixel = 16;
    int frameRateMax = 30;
    window.create(sf::VideoMode(resolutionX, resolutionY, bitsPerPixel), "Fajnanse - THE APP");
    ImGui::SFML::Init(window);
    window.setFramerateLimit(frameRateMax);
    
    ImGui::SFML::UpdateFontTexture();
}

void GUI::Run() {
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            ImGui::SFML::ProcessEvent(window, event);

            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        ImGui::SFML::Update(window, deltaClock.restart());

        if (!inUserPanel) {
    ImGui::SetCursorPosX((ImGui::GetWindowSize().x - ImGui::CalcTextSize("FAJNANSE").x) * 0.5f);
    ImGui::TextColored(ImVec4(1.0f, 0.0f, 0.0f, 1.0f), "FAJNANSE");

    ImGui::TextColored(ImVec4(1.0f, 1.0f, 1.0f, 1.0f), "Nazwa uzytkownika:");
    ImGui::SetCursorPos(ImVec2(20, 65));
    ImGui::InputText("##Username", &BufferImie[0], BufferImie.capacity() + 1);

    ImGui::TextColored(ImVec4(1.0f, 1.0f, 1.0f, 1.0f), "Haslo:");
    ImGui::SetCursorPos(ImVec2(20, 110));
    ImGui::InputText("##Password", &BufferNazwisko[0], BufferNazwisko.capacity() + 1);


    ImGui::SetCursorPos(ImVec2(127, 325));
    
    if (ImGui::Button("Zatwierdz", ImVec2(100, 40))) {
        if(core.zaloguj(BufferImie,BufferNazwisko)){
            inUserPanel = true;
            panelUzytkownika.Show();
        }
    }
} else {
if (inUserPanel && panelUzytkownika.IsVisible()) {
            panelUzytkownika.Render(BufferImie);
            
         
            panelUzytkownika.onLogout = [this]() {
              
                inUserPanel = false;
                BufferImie.clear();
                BufferNazwisko.clear();
                panelUzytkownika.Show();        
            };
            
                
         
        }
}


        window.clear();
        ImGui::SFML::Render(window);
        window.display();
    }

    ImGui::SFML::Shutdown();
}

