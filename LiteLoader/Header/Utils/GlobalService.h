#pragma once
#include <Global.h>

//Types
namespace RakNet {
struct RakPeer;
};
class Level;
class CommandRegistry;
class Minecraft;
class MinecraftCommands;
class RakNetServerLocator;
class ServerLevel;
class ServerNetworkHandler;
class LevelStorage;
class Scoreboard;

//Impl
template <typename T>
struct GlobalImpl {
    static T* _srv;
    T&        operator*() {
        return *_srv;
    }
    T* operator->() {
        return _srv;
    }
    operator T&() {
        return *_srv;
    }
    static void assign(const T& srv) {
        _srv = (T*)&srv;
    }
};

template <typename T>
T* Global() {
    return GlobalImpl<T>::_srv;
}

// Template specialization
template <>
LIAPI RakNet::RakPeer* Global<RakNet::RakPeer>();
template <>
LIAPI Level* Global<Level>();
template <>
LIAPI CommandRegistry* Global<CommandRegistry>();
template <>
LIAPI Minecraft* Global<Minecraft>();
template <>
LIAPI MinecraftCommands* Global<MinecraftCommands>();
template <>
LIAPI RakNetServerLocator* Global<RakNetServerLocator>();
template <>
LIAPI ServerLevel* Global<ServerLevel>();
template <>
LIAPI ServerNetworkHandler* Global<ServerNetworkHandler>();
template <>
LIAPI LevelStorage* Global<LevelStorage>();
template <>
LIAPI Scoreboard* Global<Scoreboard>();