#pragma once

#include <type_traits>

#include "liteloader/api/base/Concepts.h"
#include "liteloader/api/base/Macro.h"

namespace RakNet {
class RakPeer;
};
class AllowListFile;
class Minecraft;
class PropertiesSettings;
class ServerLevel;
class Level;
class ServerNetworkHandler;
class StructureManager;
class ResourcePackRepository;
class CommandRegistry;

namespace ll {

template <typename T>
concept IsGlobalService = concepts::IsOneOf<
    T,
    AllowListFile,
    Minecraft,
    PropertiesSettings,
    ServerLevel,
    Level,
    ServerNetworkHandler,
    StructureManager,
    RakNet::RakPeer,
    ResourcePackRepository,
    CommandRegistry>;

#ifdef LITELOADER_EXPORTS
template <IsGlobalService T>
LLAPI inline T* const Global = nullptr;
#else
template <IsGlobalService T>
LLAPI inline T* const Global;
#endif

} // namespace ll
