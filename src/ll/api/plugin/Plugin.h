#pragma once

#include <filesystem>
#include <functional>
#include <memory>

#include "ll/api/Expected.h"
#include "ll/api/Logger.h"
#include "ll/api/base/Macro.h"
#include "ll/api/plugin/Manifest.h"

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

    [[nodiscard]] bool isEnabled() const { return getState() == State::Enabled; }

    [[nodiscard]] bool isDisabled() const { return getState() == State::Disabled; }

    // set on load callback and etc...
    LLAPI void onLoad(CallbackFn func) noexcept;

    LLAPI void onUnload(CallbackFn func) noexcept;

    LLAPI void onEnable(CallbackFn func) noexcept;

    LLAPI void onDisable(CallbackFn func) noexcept;

protected:
    LLAPI void setState(State state) const;

    // is callback set
    LLNDAPI bool hasOnLoad() const noexcept;

    LLNDAPI bool hasOnUnload() const noexcept;

    LLNDAPI bool hasOnEnable() const noexcept;

    LLNDAPI bool hasOnDisable() const noexcept;

    // call on load callback and etc...
    LLAPI Expected<> onLoad() noexcept;

    LLAPI Expected<> onUnload() noexcept;

    LLAPI Expected<> onEnable() noexcept;

    LLAPI Expected<> onDisable() noexcept;

private:
    friend PluginManager;

    struct Impl;
    std::unique_ptr<Impl> mImpl;
};
} // namespace ll::plugin
