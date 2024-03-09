#include "login.h"
#include "../menu_constants.h"

LoginMenu::LoginMenu(Cache cache, std::string previous_menu, std::string inputBody, std::string sessionId) : BaseMenu(cache, previous_menu, inputBody, sessionId){}
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
