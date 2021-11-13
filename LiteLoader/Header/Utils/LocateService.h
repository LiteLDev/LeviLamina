#pragma once
#include <Global.h>

//Types
namespace RakNet {
struct RakPeer;
};
struct LevelObj;
class CommandRegistry;
class Level;
class Minecraft;
class MinecraftCommands;
class RakNetServerLocator;
class ServerLevel;
class ServerNetworkHandler;
class LevelStorage;

//Impl
template <typename T>
struct LocateServiceImpl {
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
T* LocateService() {
    return LocateServiceImpl<T>::_srv;
}

// Template specialization
template <>
LIAPI RakNet::RakPeer* LocateService<RakNet::RakPeer>();
template <>
LIAPI LevelObj* LocateService<LevelObj>();
template <>
LIAPI CommandRegistry* LocateService<CommandRegistry>();
template <>
LIAPI Level* LocateService<Level>();
template <>
LIAPI Minecraft* LocateService<Minecraft>();
template <>
LIAPI MinecraftCommands* LocateService<MinecraftCommands>();
template <>
LIAPI RakNetServerLocator* LocateService<RakNetServerLocator>();
template <>
LIAPI ServerLevel* LocateService<ServerLevel>();
template <>
LIAPI ServerNetworkHandler* LocateService<ServerNetworkHandler>();
template <>
LIAPI LevelStorage* LocateService<LevelStorage>();