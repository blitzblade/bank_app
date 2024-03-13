#include <iostream>
#include <sqlite3.h>
#include <fstream>
#include "db.h"
#include "../bank_lib/menus/include/menus/main_menu.h"
#include "../bank_lib/db/include/db/db.h"

void create_schema(Db& db, std::string filename = "db/db.schema"){
    std::ifstream file(filename);
    std::string line;
    std::string query = "";
    
    if (file.is_open()) {
        while (std::getline(file, line)) {
            std::cout << line << std::endl;
            query += line;
        }
        file.close();
    } else {
        std::cout << "Unable to open file" << std::endl;
    }
    const char* q = query.c_str();
    db.execute_query(q);
}

void run(MainMenu& m){
    while(true){
        m.run();
        /*call initial menu here. Which will call other menus based on body entered. USSD style*/
    }
}

int main(){
    //create schema
    std::string MAIN_MENU = "\nWelcome to Simple Bank\n1. Login\n2. Sign Up\n3. About\n";

    Cache cache = Cache();
    Db db = Db();
    MainMenu m = MainMenu(cache, "", "", "", MAIN_MENU);
    create_schema(db);
    run(m);
    return 0;
}