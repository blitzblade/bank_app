#ifndef UTIL_H
#define UTIL_H

#include <iostream>
#include <string>
#include <bcrypt/bcrypt.h>
#include <random>


namespace util {
    std::string hashString(const std::string& input);
    std::string generateRandomString(int length);
}

#endif 
