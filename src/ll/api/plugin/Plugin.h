#pragma once

#include <any>
#include <filesystem>

#include "ll/api/Logger.h"
#include "ll/api/base/UnorderedStringMap.h"
#include "ll/api/plugin/Manifest.h"

#include "mc/common/wrapper/optional_ref.h"

namespace ll::plugin {
LLETAPI std::filesystem::path pluginsPath;

class PluginManager;
class Plugin {
    friend PluginManager;

    struct Impl;
    std::unique_ptr<Impl> mImpl;

public:
    enum class State {
        Enabled,
        Disabled,
    };
    using callback_t = bool(Plugin&);
    using CallbackFn = std::function<callback_t>;

protected:
    LLAPI void setState(State state) const;

    LLNDAPI bool hasOnLoad();
    LLNDAPI bool hasOnUnload();
    LLNDAPI bool hasOnEnable();
    LLNDAPI bool hasOnDisable();

    LLAPI bool onLoad();
    LLAPI bool onUnload();
    LLAPI bool onEnable();
    LLAPI bool onDisable();

    LLAPI void onLoad(CallbackFn func);
    LLAPI void onUnload(CallbackFn func);
    LLAPI void onEnable(CallbackFn func);
    LLAPI void onDisable(CallbackFn func);

public:
    LLAPI explicit Plugin(Manifest manifest);

    LLAPI ~Plugin();

    using SharedData = UnorderedStringMap<std::any>;

    LLNDAPI State getState() const;

    LLNDAPI Manifest const& getManifest() const;

    LLNDAPI SharedData const& getSharedData() const;

    LLNDAPI SharedData& getSharedData();

    LLNDAPI std::filesystem::path getPluginDir() const;

    LLNDAPI std::filesystem::path getDataDir() const;

    LLNDAPI std::filesystem::path getConfigDir() const;

    LLNDAPI Logger& getLogger() const;

    bool hasSharedData(std::string_view key) const { return getSharedData().contains(key); }

    template <class T>
    bool hasSharedData(std::string_view key) const {
        return getSharedData().contains(key);
    }

    template <class T>
    optional_ref<std::add_const_t<T>> getSharedData(std::string_view key) const {
        if (getSharedData().contains(key)) {
            return std::any_cast<T>(&getSharedData().find(key)->second);
        }
        return std::nullopt;
    }

    template <class T>
    optional_ref<T> getSharedData(std::string_view key) {
        if (getSharedData().contains(key)) {
            return std::any_cast<T>(&getSharedData().find(key)->second);
        }
        return std::nullopt;
    }

    template <class T, class... Args>
        requires(std::is_constructible_v<std::any, std::in_place_type_t<T>, Args...>)
    [[maybe_unused]] void setSharedData(std::string const& key, Args&&... args) {
        getSharedData().insert_or_assign(key, std::make_any<T>(std::forward<Args>(args)...));
    }

    [[maybe_unused]] void removeSharedData(std::string_view key) {
        auto it = getSharedData().find(key);
        if (it != getSharedData().end()) {
            getSharedData().erase(it);
        }
    }
};
} // namespace ll::plugin
