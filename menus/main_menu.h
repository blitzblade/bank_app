#ifndef MAIN_MENU_H
#define MAIN_MENU_H

#include "base_menu.h"
#include "../menu_constants.h"

class MainMenu : BaseMenu {
    menu_bodies Menu;
    public:
    MainMenu(std::string menu, std::string input_body);
    MainMenu();
    std::string run();
};

#endif