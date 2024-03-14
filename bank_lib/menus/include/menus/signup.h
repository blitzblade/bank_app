#ifndef SIGNUP_MENU_H
#define SIGNUP_MENU_H
#include "../../../utils/include/utils/util.h"
#include "base_menu.h"

class SignupMenu : BaseMenu {

    public:
    std::string ENTER_NAME = "Enter your name: ";
    std::string ENTER_USERNAME = "Enter username: ";
    std::string ENTER_PASSWORD = "Enter new password: ";
    std::string CONFIRM_PASSWORD = "Confirm your password";

    SignupMenu(Db db, Cache cache, std::string previousMenu, std::string inputBody, std::string sessionId);
    SignupMenu();
    bool run();
    void setPreviousMenu(std::string previousMenu);
    std::string getPreviousMenu();

    void setInputBody(std::string inputBody);
    std::string getInputBody();
};

#endif