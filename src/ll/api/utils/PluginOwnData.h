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


#include "WinHelper.h"
#include "ll/api/base/Global.h"
#include <string_view>
#include <unordered_map>

LLETAPI std::unordered_map<HMODULE, std::unordered_map<std::string, void*>> ll_PluginOwnData;

namespace PluginOwnData {
inline bool hasImpl(HMODULE hPlugin, std::string const& key) {
    return ll_PluginOwnData[hPlugin].find(key) != ll_PluginOwnData[hPlugin].end();
}

template <typename T>
inline void removeImpl(HMODULE hPlugin, std::string const& key) {
    if (hasImpl(hPlugin, key)) { delete (T*)ll_PluginOwnData[hPlugin][key]; }
}

template <typename T, typename... Args>
inline T& setImpl(HMODULE hPlugin, std::string const& key, Args const&... args) {
    removeImpl<T>(hPlugin, key);
    T* res                         = new T(args...);
    ll_PluginOwnData[hPlugin][key] = res;
    return *res;
}

template <typename T>
inline T& setWithoutNewImpl(HMODULE hPlugin, std::string const& key, T* val) {
    removeImpl<T>(hPlugin, key);
    ll_PluginOwnData[hPlugin][key] = val;
    return *val;
}

template <typename T>
inline T& getImpl(HMODULE hPlugin, std::string const& key) {
    if (!hasImpl(hPlugin, key)) { throw std::out_of_range("The specified key is not found!"); }
    return *(T*)ll_PluginOwnData[hPlugin][key];
}

template <typename T, typename... Args>
inline T& getOrImpl(HMODULE hPlugin, std::string const& key, Args const&... args) {
    if (!hasImpl(hPlugin, key)) { return setImpl(hPlugin, key, args...); }
    return *(T*)ll_PluginOwnData[hPlugin][key];
}

template <typename T, typename... Args>
inline T& set(std::string const& key, Args const&... args) {
    return setImpl<T, Args...>(GetCurrentModule(), key, args...);
}

template <typename T, typename... Args>
inline T& setWithoutNew(std::string const& key, T* val) {
    return setWithoutNewImpl(GetCurrentModule(), key, val);
}

template <typename T>
inline T& get(std::string const& key) {
    return getImpl<T>(GetCurrentModule(), key);
}

template <typename T, typename... Args>
inline T& getOr(std::string const& key, Args const&... args) {
    return getOrImpl<T>(GetCurrentModule(), key, args...);
}

inline bool has(std::string const& key) { return hasImpl(GetCurrentModule(), key); }

template <typename T>
inline void remove(std::string const& key) {
    return removeImpl<T>(GetCurrentModule(), key);
}
} // namespace PluginOwnData