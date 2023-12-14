#pragma once

#include <any>
#include <filesystem>
#include <string>
#include <unordered_map>

#include "ll/api/Logger.h"
#include "ll/api/base/UnorderedStringMap.h"
#include "ll/api/base/Version.h"
#include "ll/api/utils/WinUtils.h"
#include "ll/api/plugin/Manifest.h"
#include "ll/api/plugin/PluginManager.h"

#include "mc/common/wrapper/optional_ref.h"

namespace ll::plugin {

enum class PluginState : char {
    Enabled,
    Disabled,
};

class Plugin : public std::enable_shared_from_this<Plugin> {
private:
    using Handle              = void*;
    using Callback            = std::function<bool(Plugin&)>;
    using SharedData          = UnorderedStringMap<std::any>;
    using ll_plugin_load_t    = bool (*)(Plugin&);
    using ll_plugin_unload_t  = bool (*)(Plugin&);
    using ll_plugin_enable_t  = bool (*)(Plugin&);
    using ll_plugin_disable_t = bool (*)(Plugin&);

    friend class PluginManager;

    struct Impl;
    std::unique_ptr<Impl> mImpl;

    explicit Plugin(Manifest manifest, Handle handle);

    void setState(PluginState state) const;

    bool onLoad();

    bool onUnload();

    bool onEnable();

    bool onDisable();

public:
    LLAPI ~Plugin();

    LLNDAPI static std::shared_ptr<Plugin> create(Manifest manifest, Handle handle);

    LLNDAPI PluginState getState() const;

    LLNDAPI Manifest const& getManifest() const;

    LLNDAPI Handle getHandle() const;

    LLNDAPI SharedData const& getSharedData() const;

    LLNDAPI SharedData& getSharedData();

    LLNDAPI std::filesystem::path getPluginDir() const;

    LLNDAPI std::filesystem::path getDataDir() const;

    LLNDAPI std::filesystem::path getConfigDir() const;

    LLNDAPI Logger& getLogger() const;

    LLAPI void onLoad(Callback func);

    LLAPI void onUnload(Callback func);

    LLAPI void onEnable(Callback func);

    LLAPI void onDisable(Callback func);

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

    // throw exception if not found
    [[maybe_unused]] static Plugin& current() {
        static auto& plugin = []() -> Plugin& {
            if (auto p = PluginManager::getInstance().findPlugin(win_utils::getCurrentModuleHandle()).lock()) {
                return const_cast<Plugin&>(*p);
            } else {
                throw std::runtime_error(
                    "Plugin not found, make sure you are calling this function from a plugin registered properly"
                );
            }
        }();
        return plugin;
    }
};

} // namespace ll::plugin
