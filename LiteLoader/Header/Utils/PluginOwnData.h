#pragma once
////////////////////////////////////////////////////////////////////////
//  To store those data which is specific for every plugin itself
//  Must be used header-only!
//
//  [Usage]
//
//  PluginOwnData::set<std::string>("name","hello!");
//  ......
//  ......
//  cout << PluginOwnData::get<std::string>("name") << endl;		// "hello!"
//  ......
//  if(PluginOwnData::has("name"))
//      PluginOwnData::remove<std::string>("name");
//
////////////////////////////////////////////////////////////////////////


#include <unordered_map>
#include "WinHelper.h"
#include <minwindef.h>
#include <string_view>
#include "../Global.h"


namespace PluginOwnData {
    LIAPI extern std::unordered_map<HMODULE, std::unordered_map<std::string, void*>> data;

    inline bool hasImpl(HMODULE hPlugin, const std::string& key) {
        return data[hPlugin].find(key) != data[hPlugin].end();
    }

    template <typename T>
    inline void removeImpl(HMODULE hPlugin, const std::string& key) {
        if (hasImpl(hPlugin, key)) delete (T*)data[hPlugin][key];
    }

    template <typename T, typename... Args>
    inline T& setImpl(HMODULE hPlugin, const std::string& key, const Args&... args) {
        removeImpl<T>(hPlugin, key);
        T* res = new T(args...);
        data[hPlugin][key] = res;
        return *res;
    }

    template <typename T, typename... Args>
    inline T& getOrSetImpl(HMODULE hPlugin, const std::string& key, const Args&... args) {
        if (!hasImpl(hPlugin, key)) return *(T*)(data[hPlugin][key] = new T(args...));
        return *(T*)data[hPlugin][key];
    }

    template <typename T>
    inline T& getImpl(HMODULE hPlugin, const std::string& key) {
        if (!hasImpl(hPlugin, key)) throw std::out_of_range("The specified data not found");
        return *(T*)data[hPlugin][key];
    }

    template <typename T, typename... Args>
    inline T& set(const std::string& key, const Args&... args) {
        return setImpl<T, Args...>(GetCurrentModule(), key, args...);
    }

    template <typename T, typename... Args>
    inline T& getOrSet(const std::string& key, const Args&... args) {
        return getOrSetImpl<T, Args...>(GetCurrentModule(), key, args...);
    }

    template <typename T>
    inline T& get(const std::string& key) {
        return getImpl<T>(GetCurrentModule(), key);
    }

    inline bool has(const std::string& key) {
        return hasImpl(GetCurrentModule(), key);
    }

    template <typename T>
    inline void remove(const std::string& key) {
        return removeImpl<T>(GetCurrentModule(), key);
    }
} // namespace PluginOwnData