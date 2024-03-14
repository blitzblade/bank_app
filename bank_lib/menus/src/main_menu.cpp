#include "../include/menus/main_menu.h"

MainMenu::MainMenu(Db db, Cache cache,std::string previousMenu, std::string inputBody, std::string sessionId) : BaseMenu(db, cache, previousMenu, inputBody, sessionId){}
MainMenu::MainMenu(Db db, Cache cache,std::string previousMenu, std::string inputBody, std::string sessionId, std::string menu) : BaseMenu(db, cache, previousMenu, inputBody, sessionId, menu){}
MainMenu::MainMenu() : BaseMenu(){}

bool MainMenu::run(){
    std::cout << this->menu << std::endl;
    std::string sessionId = util::generateRandomString(8);
    std::string response;
    this->signup = SignupMenu(db, cache, "","",sessionId);

    getline(std::cin, response);

    if(response == "1"){
        /*call login class*/
        std::cout << "Yet to be implemented" << std::endl;
    }else if(response == "2"){
        /*call signup class*/
        
        

        std::vector<std::string> steps = { this->signup.ENTER_NAME, this->signup.ENTER_USERNAME, this->signup.ENTER_PASSWORD, this->signup.CONFIRM_PASSWORD };

        for (std::string step : steps)
        {
            std::cout << step << std::endl;
            getline(std::cin, response);
            this->signup.setPreviousMenu(step);
            this->signup.setInputBody(response);
            this->signup.run();
        }

    }else if(response == "3"){
        /*call about class*/
        std::cout << "Yet to be implemented" << std::endl;
    }
}
