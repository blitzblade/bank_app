#include "login.h"
#include "../menu_constants.h"

LoginMenu::LoginMenu(std::string menu, std::string inputBody, std::string sessionId) : BaseMenu(menu, inputBody, sessionId){}
LoginMenu::LoginMenu() : BaseMenu(){}

std::string LoginMenu::run(){
    std::cout << "Enter username: " << std::endl;
    std::string username;
    std::string password;

    std::cin >> username;

    std::cout << "Enter password: " << std::endl;
    std::cin >> password;

    //check against the db.
}
