#pragma once

#include <any>
#include <filesystem>
#include <string>
#include <unordered_map>

#include "ll/api/memory/Memory.h"
#include "ll/api/plugin/Manifest.h"
#include "ll/api/plugin/Version.h"

#include "mc/common/wrapper/optional_ref.h"

namespace ll::plugin {

class Plugin : std::enable_shared_from_this<Plugin> {
private:
    using Handle = memory::Handle;

    friend class PluginManager;

    struct Impl;
    std::unique_ptr<Impl> mImpl;

    explicit Plugin(Manifest manifest, Handle handle);

    bool onLoad();

    bool onUnload();

    bool onEnable();

    bool onDisable();

public:
    LLAPI ~Plugin();

    LLNDAPI static std::shared_ptr<Plugin> create(Manifest manifest, Handle handle);

    LLNDAPI Manifest const& getManifest() const;

    LLNDAPI Handle getHandle() const;

    LLNDAPI std::unordered_map<std::string, std::any> const& getSharedData() const;

    LLNDAPI std::unordered_map<std::string, std::any>& getSharedData();

    LLNDAPI std::filesystem::path getPluginDir() const;

    LLNDAPI std::filesystem::path getDataDir() const;

    LLNDAPI std::filesystem::path getConfigDir() const;

    LLAPI void onLoad(std::function<bool()> const& func);

    LLAPI void onUnload(std::function<bool()> const& func);

    LLAPI void onEnable(std::function<bool()> const& func);

    LLAPI void onDisable(std::function<bool()> const& func);

    template <typename T, typename... Args>
        requires(std::is_constructible_v<std::any, std::in_place_type_t<T>, Args...>)
    [[maybe_unused]] void setSharedData(std::string const& key, Args&&... args) {
        getSharedData().insert_or_assign(key, std::make_any<T>(std::forward<Args>(args)...));
    }

    template <typename T>
    optional_ref<T> getSharedData(std::string const& key) const {
        if (getSharedData().contains(key)) { return std::any_cast<T>(&*getSharedData().find(key)); }
        return std::nullopt;
    }
};

} // namespace ll::plugin
