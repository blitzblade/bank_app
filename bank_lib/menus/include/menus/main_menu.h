#ifndef MAIN_MENU_H
#define MAIN_MENU_H

#include <vector>

#include "base_menu.h"
#include "signup.h"
#include "../../../db/include/db/cache.h"
#include "../../../db/include/db/db.h"
#include "../../../utils/include/utils/util.h"

class MainMenu : BaseMenu {
    
    public:
    SignupMenu signup;
    MainMenu(Db db, Cache cache, std::string previousMenu, std::string inputBody, std::string sessionId);
    MainMenu(Db db, Cache cache, std::string previousMenu, std::string inputBody, std::string sessionId, std::string menu);
    MainMenu();
    bool run();
};

#endif