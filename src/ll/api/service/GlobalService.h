#pragma once

#ifdef __clang__
#pragma clang diagnostic ignored "-Wundefined-var-template"
#endif

#include <type_traits>

#include "ll/api/base/Concepts.h"
#include "ll/api/base/Macro.h"

namespace RakNet {
class RakPeer;
}
class Minecraft;
class ServerLevel;
class Level;
class ServerNetworkHandler;
class ResourcePackRepository;
class NetworkSystem;

namespace ll {

template <class T>
concept IsGlobalService = concepts::IsOneOf<
    T,
    Minecraft,
    Level,
    ServerNetworkHandler,
    RakNet::RakPeer,
    NetworkSystem,
    ResourcePackRepository>;

template <IsGlobalService T>
class GlobalService {
    T* value = nullptr;

public:
    GlobalService();
    void init(T* ptr);

    constexpr T* get() { return value; }
    constexpr T* operator->() { return value; }
    constexpr T& operator*() { return *value; }
    constexpr    operator T*() { return value; } // NOLINT(google-explicit-constructor)
    template <class U>
    constexpr explicit operator U*() {
        return static_cast<U*>(value);
    }
    constexpr explicit operator bool() { return value != nullptr; }
    constexpr bool     has_value() { return value != nullptr; }

    GlobalService(GlobalService&&)                 = delete;
    GlobalService(GlobalService const&)            = delete;
    GlobalService& operator=(GlobalService&&)      = delete;
    GlobalService& operator=(GlobalService const&) = delete;
};
#ifdef __clang__
template <IsGlobalService T>
#ifdef LL_GLOBAL_SERVICE_IMPL
__declspec(dllexport)
#else
__declspec(dllimport)
#endif
    GlobalService<T> Global;
#else
template <IsGlobalService T>
LLAPI GlobalService<T> Global;
#endif

} // namespace ll
