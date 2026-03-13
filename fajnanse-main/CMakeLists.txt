# FILEPATH: /workspaces/fajnanse/CMakeLists.txt

cmake_minimum_required(VERSION 3.12)
project(Fajnanse LANGUAGES CXX)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY /workspaces/fajnanse/bin)
option(BUILD_SHARED_LIBS "Build shared libraries" ON)
set(SFML_DIR "<sfml root prefix>/lib/cmake/SFML")

include(FetchContent)

FetchContent_Declare(SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 2.6.x)
FetchContent_MakeAvailable(SFML)

FetchContent_Declare(ImGui
    GIT_REPOSITORY https://github.com/ocornut/imgui
    GIT_TAG v1.89.9)
FetchContent_MakeAvailable(ImGui)
FetchContent_GetProperties(ImGui SOURCE_DIR IMGUI_DIR)

set(IMGUI_SFML_FIND_SFML OFF)
FetchContent_Declare(ImGui-SFML
    GIT_REPOSITORY https://github.com/SFML/imgui-sfml
    GIT_TAG 2.6.x)
FetchContent_MakeAvailable(ImGui-SFML)

# Add the executable
add_executable(Fajnanse src/main.cpp 
    src/Paragon.cpp
    src/gui.cpp
    src/Konto.cpp
    src/Osoba.cpp
    src/Wydatek.cpp
    src/Fajnanse.cpp 
    src/paneluzytkownika.cpp
    src/monitorowanie.cpp
    src/planowanie.cpp
    src/podsumowanie.cpp
    src/dodawanie.cpp
    )


# Link the SFML libraries to the executable
target_link_libraries(Fajnanse PRIVATE sfml-graphics ImGui-SFML::ImGui-SFML)
target_compile_features(Fajnanse PRIVATE cxx_std_17)
add_definitions(-DSFML_SYSTEM_LINUX -DSFML_WINDOW_X11)

install(TARGETS Fajnanse DESTINATION bin)
