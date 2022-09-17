#pragma once

#ifndef LIAPI
#ifdef LITELOADER_EXPORTS
#define LIAPI __declspec(dllexport)
#else
#define LIAPI __declspec(dllimport)
#endif
#endif

// Types
namespace RakNet {
class RakPeer;
};
class Level;
class CommandRegistry;
class Minecraft;
class MinecraftCommands;
class RakNetServerLocator;
class ServerLevel;
class ServerNetworkHandler;
class DBStorage;
class Scoreboard;
class AllowListFile;
class PropertiesSettings;
class ResourcePackRepository;
class LevelStorage;

#ifdef LITELOADER_EXPORTS
template <typename T>
LIAPI inline T* Global = nullptr;
#else
template <typename T>
LIAPI inline T* Global;
#endif
