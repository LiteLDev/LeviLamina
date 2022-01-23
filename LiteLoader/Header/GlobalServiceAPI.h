#pragma once
#include "Global.h"

//Types
namespace RakNet {
class RakPeer;
};
class Level;
class CommandRegistry;
class Minecraft;
class MinecraftCommands;
struct RakNetServerLocator;
class ServerLevel;
class ServerNetworkHandler;
class DBStorage;
class Scoreboard;
class AllowListFile;

class LevelStorage;

template <typename T>
LIAPI inline T* Global = nullptr;
