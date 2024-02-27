#include "base_menu.h"

BaseMenu::BaseMenu(std::string menu, std::string input_body){
    this->menu = menu;
    this->input_body = input_body;
}

BaseMenu::BaseMenu(){
    BaseMenu("","");
}

void BaseMenu::run(){
    std::cout << this->menu << std::endl;
    
    if(this->input_body == "1"){
        /*call some function*/
    }else if(this->input_body == "2"){
        /*call some other function*/
    }
}