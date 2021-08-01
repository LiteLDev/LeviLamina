#pragma once
#include <liteloader.h>
#include <string>
#include <vector>

#include <stl/Bstream.h>
#include <stl/useful.h>
#include <stl/varint.h>

#include <mc/Actor.h>
#include <mc/Player.h>

#include <api/LiteloaderApi.h>
#include <api/myPacket.h>
#include <loader/Loader.h>

#ifndef NOMINMAX
#    define NOMINMAX
#endif
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
struct WPlayer;
class NetworkIdentifier;
namespace liteloader {
using std::string;
LIAPI bool runcmd(const string& cmd);
LIAPI bool runcmdAs(Player*, const string& cmd);
LIAPI std::pair<bool, string> runcmdEx(const string& cmd);
LIAPI std::string getIP(class NetworkIdentifier& ni);
LIAPI float getAvgPacketloss(Player*);
LIAPI int getAvgPing(Player*);
LIAPI std::vector<Player*> getAllPlayers();
LIAPI std::vector<std::pair<std::wstring, HMODULE>> getAllLibs();
LIAPI void sendAddItemEntityPacket(Player* pl, unsigned long long runtimeid, int itemid, int stacksize, short aux, Vec3 pos);

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
