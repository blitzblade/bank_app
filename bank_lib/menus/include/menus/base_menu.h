#ifndef BASE_MENU_H
#define BASE_MENU_H

#include <iostream>
#include <string>
#include "../../../db/include/db/cache.h"
#include "../../../db/include/db/db.h"

class BaseMenu {
    protected:
    std::string menu;
    Db db;
    Cache cache;
    std::string inputBody;
    std::string previousMenu;
    std::string sessionId;

    public:
    BaseMenu(Db db, Cache cache, std::string previousMenu, std::string inputBody, std::string sessionId);
    BaseMenu(Db db, Cache cache, std::string previousMenu, std::string inputBody, std::string sessionId, std::string menu);
    BaseMenu();
    bool run();
};

#endif