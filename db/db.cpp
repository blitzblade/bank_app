#include "db.h"


Db::Db(char* db_name){
    this->db_name = db_name;

    
}

Db::Db(){
    this->db_name = "bank.db";
}

bool Db::open_db(){
    int rc = sqlite3_open(db_name, &db);
    if( rc ) {
        std::cerr << "Can't open database: " << sqlite3_errmsg(db) << std::endl;
        return false;
    } else {
        std::cout << "Opened database successfully" << std::endl;
        return true;
    }
}

bool Db::execute_query(char* query){
    open_db();
    // Execute SQL statement
    int rc = sqlite3_exec(db, query, NULL, 0, &zErrMsg);
    if( rc != SQLITE_OK ){
        std::cerr << "SQL error: " << zErrMsg << std::endl;
        sqlite3_free(zErrMsg);
    } else {
        std::cout << "Table created successfully" << std::endl;
    }

    // Close database
    sqlite3_close(db);
    return 0;
}
