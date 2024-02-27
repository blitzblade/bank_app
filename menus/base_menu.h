#ifndef BASE_MENU_H
#define BASE_MENU_H

#include <iostream>
#include <string>

class BaseMenu {
    protected:
    std::string menu;
    std::string input_body;

    public:
    BaseMenu(std::string menu, std::string input_body);
    BaseMenu();
    std::string run();
};

#endif