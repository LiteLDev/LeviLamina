#pragma once

#include <concepts>
#include <memory>

#include "ll/api/mod/Mod.h"
#include "ll/api/mod/NativeMod.h" // IWYU pragma: keep

namespace ll::mod {

template <typename T>
concept Loadable = requires(T t) {
    { t.load() } -> std::same_as<bool>;
};

template <typename T>
concept Unloadable = requires(T t) {
    { t.unload() } -> std::same_as<bool>;
};

template <typename T>
concept Enableable = requires(T t) {
    { t.enable() } -> std::same_as<bool>;
};

template <typename T>
concept Disableable = requires(T t) {
    { t.disable() } -> std::same_as<bool>;
};

#define LL_REGISTER_MOD(CLAZZ, BINDER)                                                                                 \
    extern "C" {                                                                                                       \
    LL_SHARED_EXPORT bool ll_mod_load(ll::mod::NativeMod& self) {                                                      \
        static_assert(::ll::mod::Loadable<CLAZZ>, #CLAZZ " must be Loadable");                                         \
        ::ll::mod::bindToMod((BINDER), self);                                                                          \
        return (BINDER).load();                                                                                        \
    }                                                                                                                  \
    }

template <ll::mod::Loadable T>
inline void bindToMod(T& myMod, ll::mod::Mod& self) {
    if constexpr (ll::mod::Enableable<T>) {
        self.onEnable([&myMod](auto&) { return myMod.enable(); });
    }
    if constexpr (ll::mod::Disableable<T>) {
        self.onDisable([&myMod](auto&) { return myMod.disable(); });
    }
    if constexpr (ll::mod::Unloadable<T>) {
        self.onUnload([&myMod](auto& self) {
            bool result = myMod.unload();
            if (result) {
                self.onEnable({});
                self.onDisable({});
                self.onUnload({});
            }
            return result;
        });
    }
}

} // namespace ll::mod
