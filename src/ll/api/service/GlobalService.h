#pragma once

#include <type_traits>

#include "ll/api/base/Concepts.h"
#include "ll/api/base/Macro.h"

namespace RakNet {
class RakPeer;
}
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

    constexpr T* get() { return value; }
    constexpr T* operator->() { return value; }
    constexpr T& operator*() { return *value; }
    constexpr    operator T*() { return value; } // NOLINT(google-explicit-constructor)
    template <typename U>
    constexpr explicit operator U*() {
        return static_cast<U*>(value);
    }
    constexpr explicit operator bool() { return value != nullptr; }
    constexpr bool has_value() { return value != nullptr; }
};

template <IsGlobalService T>
LLAPI GlobalService<T> Global;

} // namespace ll
