#include "../include/db/db.h"


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
        return true;
    }
}

bool Db::execute_query(const char* query){
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

bool Db::insert_user(User& user){
    //Users(ID INT PRIMARY KEY NOT NULL, name TEXT NOT NULL, username TEXT, password TEXT);
    std::string q = "INSERT INTO users(name, username, password) VALUES (?, ?, ?)";
    open_db();
    sqlite3_stmt* stmt;
    int rc = sqlite3_prepare_v2(db, q.c_str(), -1, &stmt, nullptr);

    if (rc != SQLITE_OK) {
        sqlite3_finalize(stmt);
        sqlite3_close(db);
        return false;
    }
    sqlite3_bind_text(stmt, 1, user.name.c_str(), -1, SQLITE_STATIC);
    sqlite3_bind_text(stmt, 2, user.username.c_str(), -1, SQLITE_STATIC);
    sqlite3_bind_text(stmt, 3, user.password_hash.c_str(), -1, SQLITE_STATIC);

    // Execute the query
    rc = sqlite3_step(stmt);

    // Clean up
    sqlite3_finalize(stmt);
    sqlite3_close(db);
    return true;
}
