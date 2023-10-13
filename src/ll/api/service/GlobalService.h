#pragma once

#include <type_traits>

#include "ll/api/base/Concepts.h"
#include "ll/api/base/Macro.h"

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
    LLAPI GlobalService();
    void  init(T* ptr);

    T* get() { return value; }
    T* operator->() { return value; }
    T& operator*() { return *value; }
    operator T*() { return value; } // NOLINT(google-explicit-constructor)
    template <typename U>
    explicit operator U*() {
        return static_cast<U*>(value);
    }
    explicit operator bool() { return value != nullptr; }
    bool has_value() { return value != nullptr; }
};

template <IsGlobalService T>
LLAPI GlobalService<T> Global;

} // namespace ll
