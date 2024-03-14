#include "../include/menus/base_menu.h"


BaseMenu::BaseMenu(Db db, Cache cache, std::string previousMenu, std::string inputBody, std::string sessionId){
    this->db = db;
    this->cache = cache;
    this->previousMenu = previousMenu;
    this->inputBody = inputBody;
    this->sessionId = sessionId;
}

BaseMenu::BaseMenu(Db db, Cache cache, std::string previousMenu, std::string inputBody, std::string sessionId, std::string menu){
    this->db = db;
    this->previousMenu = previousMenu;
    this->cache = cache;
    this->inputBody = inputBody;
    this->sessionId = sessionId;
    this->menu = menu;
}

BaseMenu::BaseMenu(){
    
    BaseMenu(Db(), Cache(),"","","");
}

bool BaseMenu::run(){
    std::cout << this->menu << std::endl;
    
    if(this->inputBody == "1"){
        /*call some function*/
    }else if(this->inputBody == "2"){
        /*call some other function*/
    }
    return false; //don't run
}