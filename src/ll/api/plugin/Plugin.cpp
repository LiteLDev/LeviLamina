#include "ll/api/plugin/Plugin.h"

#include "ll/api/command/CommandRegistrar.h"
#include "ll/api/event/EventBus.h"
#include "ll/api/event/server/ServerStartedEvent.h"
#include "ll/api/i18n/I18n.h"
#include "ll/api/service/Bedrock.h"
#include "ll/api/service/ServerInfo.h"

namespace ll::plugin {
using namespace i18n_literals;

std::filesystem::path const& getPluginsRoot() {
    static std::filesystem::path path = u8"plugins/";
    return path;
}

struct Plugin::Impl {
    Manifest manifest;

    State state;

    Logger logger;

    CallbackFn onLoad;
    CallbackFn onUnload;
    CallbackFn onEnable;
    CallbackFn onDisable;

    std::filesystem::path pluginDir;
    std::filesystem::path dataDir;
    std::filesystem::path configDir;
    std::filesystem::path langDir;
};

Plugin::Plugin(Manifest manifest) : mImpl(std::make_unique<Impl>()) {
    mImpl->manifest     = std::move(manifest);
    mImpl->state        = State::Disabled;
    mImpl->logger.title = mImpl->manifest.name;
    mImpl->pluginDir    = getPluginsRoot() / string_utils::sv2u8sv(mImpl->manifest.name);
    mImpl->dataDir      = mImpl->pluginDir / u8"data";
    mImpl->configDir    = mImpl->pluginDir / u8"config";
    mImpl->langDir      = mImpl->pluginDir / u8"lang";
}
Plugin::~Plugin() = default;

Manifest const& Plugin::getManifest() const { return mImpl->manifest; }

std::filesystem::path const& Plugin::getPluginDir() const { return mImpl->pluginDir; }

std::filesystem::path const& Plugin::getDataDir() const { return mImpl->dataDir; }

std::filesystem::path const& Plugin::getConfigDir() const { return mImpl->configDir; }

std::filesystem::path const& Plugin::getLangDir() const { return mImpl->langDir; }

bool Plugin::hasOnLoad() const noexcept { return mImpl->onLoad != nullptr; }

bool Plugin::hasOnUnload() const noexcept { return mImpl->onUnload != nullptr; }

bool Plugin::hasOnEnable() const noexcept { return mImpl->onEnable != nullptr; }

bool Plugin::hasOnDisable() const noexcept { return mImpl->onDisable != nullptr; }

Expected<> Plugin::onLoad() noexcept {
    try {
        if (!mImpl->onLoad || mImpl->onLoad(*this)) {
            if (getServerStatus() == ServerStatus::Running) {
                return onEnable().transform([this] {
                    if (service::getServerInstance()) {
                        event::EventBus::getInstance().publish(
                            mImpl->manifest.name,
                            event::ServerStartedEvent{service::getServerInstance()}
                        );
                    }
                });
            }
            return {};
        } else {
            return makeStringError("The plugin cannot be loaded"_tr());
        }
    } catch (...) {
        return makeExceptionError();
    }
}

Expected<> Plugin::onUnload() noexcept {
    try {
        if (!mImpl->onUnload || mImpl->onUnload(*this)) {
            event::EventBus::getInstance().removePluginEventEmitters(mImpl->manifest.name);
            return {};
        } else {
            return makeStringError("The plugin cannot be unloaded"_tr());
        }
    } catch (...) {
        return makeExceptionError();
    }
}

Expected<> Plugin::onEnable() noexcept {
    try {
        if (getState() == State::Enabled) {
            return {};
        }
        if (!mImpl->onEnable || mImpl->onEnable(*this)) {
            setState(State::Enabled);
            return {};
        } else {
            return makeStringError("The plugin cannot be enabled"_tr());
        }
    } catch (...) {
        return makeExceptionError();
    }
}

Expected<> Plugin::onDisable() noexcept {
    try {
        if (getState() == State::Disabled) {
            return {};
        }
        if (!mImpl->onDisable || mImpl->onDisable(*this)) {
            setState(State::Disabled);
            event::EventBus::getInstance().removePluginListeners(mImpl->manifest.name);
            command::CommandRegistrar::getInstance().disablePluginCommands(mImpl->manifest.name);
            return {};
        } else {
            return makeStringError("The plugin cannot be disabled"_tr());
        }
    } catch (...) {
        return makeExceptionError();
    }
}

void Plugin::onLoad(CallbackFn func) noexcept { mImpl->onLoad = std::move(func); }

void Plugin::onUnload(CallbackFn func) noexcept { mImpl->onUnload = std::move(func); }

void Plugin::onEnable(CallbackFn func) noexcept { mImpl->onEnable = std::move(func); }

void Plugin::onDisable(CallbackFn func) noexcept { mImpl->onDisable = std::move(func); }

void Plugin::setState(State state) const { mImpl->state = state; }

Plugin::State Plugin::getState() const { return mImpl->state; }

Logger& Plugin::getLogger() const { return mImpl->logger; }

} // namespace ll::plugin
