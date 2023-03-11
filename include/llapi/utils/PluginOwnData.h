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
//  cout << PluginOwnData::get<std::string>("name") << endl;        // "hello!"
//  ......
//  if(PluginOwnData::has("name"))
//      PluginOwnData::remove<std::string>("name");
//
////////////////////////////////////////////////////////////////////////


#include <unordered_map>
#include "WinHelper.h"
#include <minwindef.h>
#include <string_view>
#include "llapi/Global.h"

LLAPI extern std::unordered_map<HMODULE, std::unordered_map<std::string, void*>> ll_PluginOwnData;

namespace PluginOwnData {
inline bool hasImpl(HMODULE hPlugin, const std::string& key) {
    return ll_PluginOwnData[hPlugin].find(key) != ll_PluginOwnData[hPlugin].end();
}

template <typename T>
inline void removeImpl(HMODULE hPlugin, const std::string& key) {
    if (hasImpl(hPlugin, key)) {
        delete (T*)ll_PluginOwnData[hPlugin][key];
    }
}

template <typename T, typename... Args>
inline T& setImpl(HMODULE hPlugin, const std::string& key, const Args&... args) {
    removeImpl<T>(hPlugin, key);
    T* res = new T(args...);
    ll_PluginOwnData[hPlugin][key] = res;
    return *res;
}

template <typename T>
inline T& setWithoutNewImpl(HMODULE hPlugin, const std::string& key, T* val) {
    removeImpl<T>(hPlugin, key);
    ll_PluginOwnData[hPlugin][key] = val;
    return *val;
}

template <typename T>
inline T& getImpl(HMODULE hPlugin, const std::string& key) {
    if (!hasImpl(hPlugin, key)) {
        throw std::out_of_range("The specified key is not found!");
    }
    return *(T*)ll_PluginOwnData[hPlugin][key];
}

template <typename T, typename... Args>
inline T& getOrImpl(HMODULE hPlugin, const std::string& key, const Args&... args) {
    if (!hasImpl(hPlugin, key)) {
        return setImpl(hPlugin, key, args...);
    }
    return *(T*)ll_PluginOwnData[hPlugin][key];
}

template <typename T, typename... Args>
inline T& set(const std::string& key, const Args&... args) {
    return setImpl<T, Args...>(GetCurrentModule(), key, args...);
}

template <typename T, typename... Args>
inline T& setWithoutNew(const std::string& key, T* val) {
    return setWithoutNewImpl(GetCurrentModule(), key, val);
}

template <typename T>
inline T& get(const std::string& key) {
    return getImpl<T>(GetCurrentModule(), key);
}

template <typename T, typename ... Args>
inline T& getOr(const std::string& key, const Args& ... args) {
    return getOrImpl<T>(GetCurrentModule(), key, args...);
}

inline bool has(const std::string& key) {
    return hasImpl(GetCurrentModule(), key);
}

template <typename T>
inline void remove(const std::string& key) {
    return removeImpl<T>(GetCurrentModule(), key);
}
} // namespace PluginOwnData