#ifndef LOGIN_MENU_H
#define LOGIN_MENU_H

#include "base_menu.h"
#include "../../../db/include/db/cache.h"

class LoginMenu : BaseMenu {
    public:
    LoginMenu(Db db, Cache cache, std::string menu, std::string inputBody, std::string sessionId);
    LoginMenu();
    std::string run();
};

#endif