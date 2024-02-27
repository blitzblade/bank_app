#include <iostream>
#include <sqlite3.h>
#include <fstream>
#include "db/db.h"

bool create_schema(Db& db, std::string filename = "db.schema"){
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
    char* q = query.data();
    db.execute_query(q);
}

void run(){
    while(true){
        /*call initial menu here. Which will call other menus based on body entered. USSD style*/
    }
}

int main(){
    //create schema
    Db db = Db();

    create_schema(db);
    run();
    return 0;
}