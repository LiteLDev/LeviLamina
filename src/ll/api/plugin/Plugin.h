#pragma once

#include <any>
#include <filesystem>

#include "ll/api/Logger.h"
#include "ll/api/base/UnorderedStringMap.h"
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

    LLNDAPI Logger& getLogger() const;

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

private:
    friend PluginManager;

    struct Impl;
    std::unique_ptr<Impl> mImpl;
};
} // namespace ll::plugin
