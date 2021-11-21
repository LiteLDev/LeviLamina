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

template <typename T>
inline T* Global = nullptr;
