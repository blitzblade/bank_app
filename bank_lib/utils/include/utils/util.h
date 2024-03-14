#ifndef UTIL_H
#define UTIL_H

#include <iostream>
#include <string>
#include <bcrypt/bcrypt.h>
#include <random>


namespace util {
    std::string hashPassword(const std::string& input);
    bool verifyPassword(const std::string& inputPassword, const std::string& storedHash);
    std::string generateRandomString(int length);
}

#endif 
