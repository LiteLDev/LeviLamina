#include "ll/api/plugin/Plugin.h"

#include "ll/api/ServerInfo.h"
#include "ll/api/event/EventBus.h"
#include "ll/api/event/world/ServerStartedEvent.h"
#include "ll/api/service/Bedrock.h"

namespace ll::plugin {
std::filesystem::path pluginsPath{u8"plugins/"};

struct Plugin::Impl {
    Manifest   manifest;
    State      state = State::Disabled;
    Logger     logger;
    SharedData sharedData;
    CallbackFn onLoad;
    CallbackFn onUnload;
    CallbackFn onEnable;
    CallbackFn onDisable;
};

Plugin::Plugin(Manifest manifest) : mImpl(std::make_unique<Impl>()) {
    mImpl->manifest     = std::move(manifest);
    mImpl->logger.title = mImpl->manifest.name;
}
Plugin::~Plugin() = default;

Manifest const& Plugin::getManifest() const { return mImpl->manifest; }

Plugin::SharedData const& Plugin::getSharedData() const { return mImpl->sharedData; }
Plugin::SharedData&       Plugin::getSharedData() { return mImpl->sharedData; }


std::filesystem::path Plugin::getPluginDir() const {
    static auto path = [&] {
        auto dataPath = pluginsPath / mImpl->manifest.name;
        if (!std::filesystem::exists(dataPath)) {
            std::error_code ec;
            std::filesystem::create_directories(dataPath, ec);
        }
        return dataPath;
    }();
    return path;
}

std::filesystem::path Plugin::getDataDir() const {
    static auto path = getPluginDir() / u8"data";
    return path;
}

std::filesystem::path Plugin::getConfigDir() const {
    static auto path = getPluginDir() / u8"config";
    return path;
}

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
