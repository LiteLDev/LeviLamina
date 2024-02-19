#pragma once

#include <any>
#include <filesystem>

#include "ll/api/Logger.h"
#include "ll/api/base/Containers.h"
#include "ll/api/plugin/Manifest.h"

#include "mc/common/wrapper/optional_ref.h"

namespace ll::plugin {

LLAPI std::filesystem::path const& getPluginsRoot();

class PluginManager;
class Plugin {

public:
    enum class State {
        Enabled,
        Disabled,
    };
    using callback_t = bool(Plugin&);
    using CallbackFn = std::function<callback_t>;

    LLNDAPI explicit Plugin(Manifest manifest);

    LLAPI ~Plugin();

    LLNDAPI State getState() const;

    LLNDAPI Manifest const& getManifest() const;

    LLNDAPI std::filesystem::path const& getPluginDir() const;

    LLNDAPI std::filesystem::path const& getDataDir() const;

    LLNDAPI std::filesystem::path const& getConfigDir() const;

    LLNDAPI std::filesystem::path const& getLangDir() const;

    LLNDAPI Logger& getLogger() const;

protected:
    LLAPI void setState(State state) const;

    LLNDAPI bool hasOnLoad() noexcept;
    LLNDAPI bool hasOnUnload() noexcept;
    LLNDAPI bool hasOnEnable() noexcept;
    LLNDAPI bool hasOnDisable() noexcept;

    LLAPI bool onLoad() noexcept;
    LLAPI bool onUnload() noexcept;
    LLAPI bool onEnable() noexcept;
    LLAPI bool onDisable() noexcept;

    LLAPI void onLoad(CallbackFn func) noexcept;
    LLAPI void onUnload(CallbackFn func) noexcept;
    LLAPI void onEnable(CallbackFn func) noexcept;
    LLAPI void onDisable(CallbackFn func) noexcept;

private:
    friend PluginManager;

    struct Impl;
    std::unique_ptr<Impl> mImpl;
};
} // namespace ll::plugin
