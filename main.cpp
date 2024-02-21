#include <iostream>
#include <sqlite3.h>

int main(){
    sqlite3* db;
    char* zErrMsg = 0;
    int rc;

    // Open database
    rc = sqlite3_open("test.db", &db);
    if( rc ) {
        std::cerr << "Can't open database: " << sqlite3_errmsg(db) << std::endl;
        return -1;
    } else {
        std::cout << "Opened database successfully" << std::endl;
    }

    // Execute SQL statement
    rc = sqlite3_exec(db, "CREATE TABLE IF NOT EXISTS COMPANY(ID INT PRIMARY KEY NOT NULL, NAME TEXT NOT NULL);", NULL, 0, &zErrMsg);
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