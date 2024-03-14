#ifndef DATABASE_H
#define DATABASE_H

#include <iostream>
#include <string>   
#include <vector>
#include <sqlite3.h>
#include "cache.h"

class Db
{
    private:
        sqlite3* db;
        char* zErrMsg = 0;
        char* db_name;

    public:
        Db();
        Db(char* db_name);
        bool open_db();
        bool execute_query(const char* query);
        bool insert_user(User& user);
};

#endif