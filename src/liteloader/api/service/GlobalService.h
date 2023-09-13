#pragma once

#include <type_traits>

#include "liteloader/api/base/Concepts.h"
#include "liteloader/api/base/Macro.h"

namespace RakNet {
class RakPeer;
};
class AllowListFile;
class CommandRegistry;
class DBStorage;
class Level;
class LevelStorage;
class Minecraft;
class MinecraftCommands;
class PropertiesSettings;
class RakNetServerLocator;
class Scoreboard;
class ServerLevel;
class ServerNetworkHandler;
class StructureManager;
class ResourcePackRepository;

namespace ll {

template <typename T>
concept IsGlobalService = concepts::IsOneOf<
    T,
    AllowListFile,
    CommandRegistry,
    DBStorage,
    Level,
    LevelStorage,
    Minecraft,
    MinecraftCommands,
    PropertiesSettings,
    RakNetServerLocator,
    Scoreboard,
    ServerLevel,
    ServerNetworkHandler,
    StructureManager,
    RakNet::RakPeer,
    ResourcePackRepository>;

#ifdef LITELOADER_EXPORTS
template <IsGlobalService T>
LLAPI inline T* const Global = nullptr;
#else
template <IsGlobalService T>
LLAPI inline T* const Global;
#endif

} // namespace ll
