#include "ll/api/plugin/Plugin.h"

#include "ll/api/event/EventBus.h"
#include "ll/api/event/server/ServerStartedEvent.h"
#include "ll/api/service/Bedrock.h"
#include "ll/api/service/ServerInfo.h"

namespace ll::plugin {

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
    mImpl->pluginDir    = getPluginsRoot() / mImpl->manifest.name;
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

bool Plugin::hasOnLoad() { return mImpl->onLoad != nullptr; }

bool Plugin::hasOnUnload() { return mImpl->onUnload != nullptr; }

bool Plugin::hasOnEnable() { return mImpl->onEnable != nullptr; }

bool Plugin::hasOnDisable() { return mImpl->onDisable != nullptr; }

bool Plugin::onLoad() {
    if (!mImpl->onLoad || mImpl->onLoad(*this)) {
        if (getServerStatus() == ServerStatus::Running) {
            onEnable();
            if (service::getServerInstance()) {
                event::EventBus::getInstance().publish(
                    mImpl->manifest.name,
                    event::ServerStartedEvent{service::getServerInstance()}
                );
            }
        }
        return true;
    }
    return false;
}

bool Plugin::onUnload() { return !mImpl->onUnload || mImpl->onUnload(*this); }

bool Plugin::onEnable() {
    if (getState() == State::Enabled) {
        return true;
    }
    if (!mImpl->onEnable || mImpl->onEnable(*this)) {
        setState(State::Enabled);
        return true;
    }
    return false;
}

bool Plugin::onDisable() {
    if (getState() == State::Disabled) {
        return true;
    }
    if (!mImpl->onDisable || mImpl->onDisable(*this)) {
        setState(State::Disabled);
        event::EventBus::getInstance().removePluginListeners(mImpl->manifest.name);
        return true;
    }
    return false;
}

void Plugin::onLoad(CallbackFn func) { mImpl->onLoad = std::move(func); }

void Plugin::onUnload(CallbackFn func) { mImpl->onUnload = std::move(func); }

void Plugin::onEnable(CallbackFn func) { mImpl->onEnable = std::move(func); }

void Plugin::onDisable(CallbackFn func) { mImpl->onDisable = std::move(func); }

void Plugin::setState(State state) const { mImpl->state = state; }

Plugin::State Plugin::getState() const { return mImpl->state; }

Logger& Plugin::getLogger() const { return mImpl->logger; }

} // namespace ll::plugin
