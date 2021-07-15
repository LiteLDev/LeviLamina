#pragma once
#include <liteloader.h>
#include <mc/Player.h>
#include <stl\useful.h>
#include <string>
#include <vector>
#ifndef NOMINMAX
#    define NOMINMAX
#endif
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
struct WPlayer;
class NetworkIdentifier;
namespace liteloader {
using std::string;
LIAPI bool runcmd(const string &cmd);
LIAPI bool runcmdAs(Player *, const string &cmd);
LIAPI std::pair<bool, string> runcmdEx(const string &cmd);
LIAPI string getIP(NetworkIdentifier &);
LIAPI std::vector<Player *> getAllPlayers();
LIAPI std::vector<std::pair<std::wstring, HMODULE>> getAllLibs();
template <typename T>
static inline void APPEND(string &r, T &&x) {
    r.append(S(std::forward<T>(x)));
    r.push_back(' ');
}
template <typename... T>
static inline bool runcmdA(T &&...a) {
    string s;
    (APPEND(s, std::forward<T>(a)), ...);
    return runcmd(s);
}
template <typename N, typename... T>
static inline bool runcmdAsA(N p, T &&...a) {
    string s;
    (APPEND(s, std::forward<T>(a)), ...);
    return runcmdAs(p, s);
}
};  // namespace liteloader
