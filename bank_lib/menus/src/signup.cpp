#include "../include/menus/signup.h"

SignupMenu::SignupMenu(Db db, Cache cache, std::string previousMenu, std::string inputBody, std::string sessionId) : BaseMenu(db, cache, previousMenu, inputBody, sessionId){}
SignupMenu::SignupMenu() : BaseMenu(){}

void SignupMenu::setPreviousMenu(std::string previousMenu){
    this->previousMenu = previousMenu;
}
std::string SignupMenu::getPreviousMenu(){
    return this->previousMenu;
}

void SignupMenu::setInputBody(std::string inputBody){
    this->inputBody = inputBody;
}
std::string SignupMenu::getInputBody(){
    return this->inputBody;
}

bool SignupMenu::run(){
    //use cache
    User user;
    if(this->previousMenu == this->ENTER_NAME){
        //user has entered name. cache it.
        user.name = inputBody;
        this->cache.addToCache(sessionId, user);
        return true;
    }else if (this->previousMenu == this->ENTER_USERNAME)
    {
        user = this->cache.getUser(sessionId);
        user.username = inputBody;
        this->cache.addToCache(sessionId, user);
        //user has entered username. cache it.
        return true;
    }else if (this->previousMenu == this->ENTER_PASSWORD){
        //user has entered password. cache it. but hash it first
        user = this->cache.getUser(sessionId);
        user.password_hash = util::hashPassword(inputBody);
        this->cache.addToCache(sessionId, user);
        return true;
    }else if (this->previousMenu == this->CONFIRM_PASSWORD){
        //user has confirmed password. cache it. save all data to db.
        user = this->cache.getUser(sessionId);
        std::cout << user.password_hash << " vs " << util::hashPassword(inputBody) << std::endl;
        if(util::verifyPassword(this->inputBody, user.password_hash)){

            
         this->cache.addToCache(sessionId, user);

         this->db.insert_user(user);
         std::cout << "Congratulations! Signup successful." << std::endl;

        }else{
            //exit maybe?? TODO
            std::cout << "Password not equal" << std::endl;
            return false;
        }
        
        return true;
    }
    //check against the db.
    return false;
}
