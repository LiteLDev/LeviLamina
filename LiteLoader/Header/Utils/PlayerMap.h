#pragma once
#include <Global.h>
class ServerPlayer;
struct DePlayerCB {
    void *userdata;
    void (*cb)(void *, ServerPlayer *);
    void operator()(ServerPlayer *sp) { cb(userdata, sp); }
};

LIAPI void _regDePlayerCB(DePlayerCB);

template <typename T>
class playerMap {
  public:
    std::unordered_map<ServerPlayer *, T> _map;

  private:
    static void onDelete(playerMap<T> &thi, ServerPlayer *sp) { thi._map.erase(sp); }

  public:
    playerMap() {
        DePlayerCB cb;
        cb.userdata = this;
        cb.cb       = (decltype(cb.cb))(&playerMap<T>::onDelete);
        _regDePlayerCB(cb);
    }
    inline T &get(ServerPlayer *sp) {
        auto it = _map.find(sp);
        if (it == _map.end()) {
            if constexpr (std::is_constructible<T, ServerPlayer &>()) {
                _map.emplace(sp, *sp);
            } else {
                _map.operator[](sp);
            }
            return get(sp);
        } else {
            return it->second;
        }
    }
    T &operator[](ServerPlayer *sp) { return get(sp); }
    T &operator[](ServerPlayer &sp) { return get(&sp); }
};