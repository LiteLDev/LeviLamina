#pragma once

#include <concepts>
#include <memory>

#include "ll/api/plugin/NativePlugin.h" // IWYU pragma: keep
#include "ll/api/plugin/Plugin.h"

namespace ll::plugin {

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

#define LL_REGISTER_PLUGIN(CLAZZ, BINDER)                                                                              \
    extern "C" {                                                                                                       \
    _declspec(dllexport) bool ll_plugin_load(ll::plugin::NativePlugin& self) {                                         \
        static_assert(ll::plugin::Loadable<CLAZZ>, #CLAZZ " must be Loadable");                                        \
        static_assert(                                                                                                 \
            std::constructible_from<CLAZZ, ll::plugin::NativePlugin&>,                                                 \
            #CLAZZ " must be constructible from NativePlugin&"                                                         \
        );                                                                                                             \
        (BINDER) = std::make_unique<CLAZZ>(self);                                                                      \
        ll::plugin::bindToPlugin((BINDER), self);                                                                      \
        return (BINDER)->load();                                                                                       \
    }                                                                                                                  \
    }

template <ll::plugin::Loadable T>
inline void bindToPlugin(std::unique_ptr<T>& myPlugin, ll::plugin::Plugin& self) {
    if constexpr (ll::plugin::Enableable<T>) {
        self.onEnable([&myPlugin](auto&) { return myPlugin->enable(); });
    }
    if constexpr (ll::plugin::Disableable<T>) {
        self.onDisable([&myPlugin](auto&) { return myPlugin->disable(); });
    }
    if constexpr (ll::plugin::Unloadable<T>) {
        self.onUnload([&myPlugin](auto& self) {
            bool result = myPlugin->unload();
            if (result) {
                myPlugin.reset();
                self.onEnable({});
                self.onDisable({});
                self.onUnload({});
            }
            return result;
        });
    }
}

} // namespace ll::plugin
