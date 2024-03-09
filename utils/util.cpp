#include <iostream>
#include <string>
#include <bcrypt/bcrypt.h>
#include <random>

#include "util.h"

namespace util {
    
    std::string hashString(const std::string& input) {
    char salt[BCRYPT_HASHSIZE];
    char hash[BCRYPT_HASHSIZE];

    // Generate salt
    bcrypt_gensalt(12, salt);

    // Hash the input string
    bcrypt_hashpw(input.c_str(), salt, hash);

    // Convert the hash to a string and return it
    return std::string(hash);
    }


    std::string generateRandomString(int length) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 25); // Distribution for lowercase letters

    std::string randomString;
    randomString.reserve(length);

    for (int i = 0; i < length; ++i) {
        char randomChar = 'a' + dis(gen); // Generate a random lowercase letter
        randomString.push_back(randomChar);
    }

    return randomString;
}
}
