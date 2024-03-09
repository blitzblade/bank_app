#include "cache.h"

void Cache::addToCache(const std::string& key, const std::string& value) {
    cache[key] = value;
}

bool Cache::isInCache(const std::string& key) const {
    return cache.find(key) != cache.end();
}

std::string Cache::getValue(const std::string& key) const {
    if (isInCache(key)) {
        return cache.at(key);
    } else {
        return "";
    }
}

void Cache::addToCache(const std::string& key, const User& value) {
    userCache[key] = value;
}

bool Cache::userExists(const std::string& key) const {
    return userCache.find(key) != userCache.end();
}

User Cache::getUser(const std::string& key) const {
    if (userExists(key)) {
        return userCache.at(key);
    } else {
        return User{};
    }
}