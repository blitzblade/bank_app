#ifndef CACHE_H
#define CACHE_H

#include <iostream>
#include <unordered_map>
#include <string>
struct Session {
    std::string session_id;
    std::string username;
};

struct OptionsTree {
    std::string id;
    std::string session_id;
    std::string parent_id;
    std::string menu;
};

struct User {
    std::string name;
    std::string username;
    std::string password_hash;
};

class Cache {
private:
    std::unordered_map<std::string, std::string> cache;
    std::unordered_map<std::string, User> userCache;

public:
    void addToCache(const std::string& key, const std::string& value);
    bool isInCache(const std::string& key) const;
    std::string getValue(const std::string& key) const;
    //user methods
    void addToCache(const std::string& key, const User& value);
    bool userExists(const std::string& key) const;
    User getUser(const std::string& key) const;
};



#endif