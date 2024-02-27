#ifndef DATABASE_H
#define DATABASE_H

#include <iostream>
#include <string>   
#include <vector>
#include <sqlite3.h>

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
        bool execute_query(char* query);
};

#endif