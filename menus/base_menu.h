#ifndef BASE_MENU_H
#define BASE_MENU_H

#include <iostream>
#include <string>
#include "../db/cache.h"

class BaseMenu {
    protected:
    std::string menu;
    Cache cache;
    std::string inputBody;
    std::string previousMenu;
    std::string sessionId;

    public:
    BaseMenu(Cache cache, std::string previousMenu, std::string inputBody, std::string sessionId);
    BaseMenu(Cache cache, std::string previousMenu, std::string inputBody, std::string sessionId, std::string menu);
    BaseMenu();
    bool run();
};

#endif