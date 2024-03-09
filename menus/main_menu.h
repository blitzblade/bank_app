#ifndef MAIN_MENU_H
#define MAIN_MENU_H

#include "base_menu.h"
#include "../menu_constants.h"
#include "signup.h"
#include "../menu_constants.h"
#include "../db/cache.h"
#include "../utils/util.h"
#include <vector>

class MainMenu : BaseMenu {
    SignupMenu signup;
    public:
    MainMenu(Cache cache, std::string previousMenu, std::string inputBody, std::string sessionId);
    MainMenu(Cache cache, std::string previousMenu, std::string inputBody, std::string sessionId, std::string menu);
    MainMenu();
    bool run();
};

#endif