#include "main_menu.h"
#include "../menu_constants.h"

MainMenu::MainMenu(std::string menu, std::string input_body) : BaseMenu(menu, input_body){}
MainMenu::MainMenu() : BaseMenu(){}

std::string MainMenu::run(){
    std::cout << this->menu << std::endl;
    std::string response;

    std::cin >> response;

    if(response == "1"){
        /*call login class*/
        std::cout << "Yet to be implemented" << std::endl;
    }else if(response == "2"){
        /*call signup class*/
        std::cout << "Yet to be implemented" << std::endl;
    }else if(response == "3"){
        /*call about class*/
        std::cout << "Yet to be implemented" << std::endl;
    }
}
