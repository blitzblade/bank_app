#include <iostream>
#include <string>

class BaseMenu {
    std::string menu;
    std::string input_body;

    public:
    BaseMenu(std::string menu, std::string input_body);
    BaseMenu();
    std::string run();
};