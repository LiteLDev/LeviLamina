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

template <IsGlobalService T>
class GlobalService {
    T* value = nullptr;

public:
    GlobalService();
    void init(T* ptr);

    T* get() { return value; }
    T* operator->() { return value; }
    T& operator*() { return *value; }
    operator T*() { return value; } // NOLINT(google-explicit-constructor)
    template <typename U>
    explicit operator U*() {
        return static_cast<U*>(value);
    }
};

template <IsGlobalService T>
LLAPI GlobalService<T> Global;

} // namespace ll
