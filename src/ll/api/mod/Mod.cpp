#include "ll/api/mod/Mod.h"

#include "ll/api/command/CommandRegistrar.h"
#include "ll/api/event/EventBus.h"
#include "ll/api/event/server/ServerStartedEvent.h"
#include "ll/api/i18n/I18n.h"
#include "ll/api/service/Bedrock.h"
#include "ll/api/service/ServerInfo.h"

namespace ll::mod {
using namespace i18n_literals;

std::filesystem::path const& getModsRoot() {
    static std::filesystem::path path = u8"mods/";
    return path;
}

struct Mod::Impl {
    Manifest manifest;

    State state;

    Logger logger;

    CallbackFn onLoad;
    CallbackFn onUnload;
    CallbackFn onEnable;
    CallbackFn onDisable;

    std::filesystem::path modDir;
    std::filesystem::path dataDir;
    std::filesystem::path configDir;
    std::filesystem::path langDir;
};

Mod::Mod(Manifest manifest) : mImpl(std::make_unique<Impl>()) {
    mImpl->manifest     = std::move(manifest);
    mImpl->state        = State::Disabled;
    mImpl->logger.title = mImpl->manifest.name;
    mImpl->modDir       = getModsRoot() / string_utils::sv2u8sv(mImpl->manifest.name);
    mImpl->dataDir      = mImpl->modDir / u8"data";
    mImpl->configDir    = mImpl->modDir / u8"config";
    mImpl->langDir      = mImpl->modDir / u8"lang";
}
Mod::~Mod() = default;

Manifest const& Mod::getManifest() const { return mImpl->manifest; }

std::filesystem::path const& Mod::getModDir() const { return mImpl->modDir; }

std::filesystem::path const& Mod::getDataDir() const { return mImpl->dataDir; }

std::filesystem::path const& Mod::getConfigDir() const { return mImpl->configDir; }

std::filesystem::path const& Mod::getLangDir() const { return mImpl->langDir; }

bool Mod::hasOnLoad() const noexcept { return mImpl->onLoad != nullptr; }

bool Mod::hasOnUnload() const noexcept { return mImpl->onUnload != nullptr; }

bool Mod::hasOnEnable() const noexcept { return mImpl->onEnable != nullptr; }

bool Mod::hasOnDisable() const noexcept { return mImpl->onDisable != nullptr; }

Expected<> Mod::onLoad() noexcept {
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
            return makeStringError("The mod cannot be loaded"_tr());
        }
    } catch (...) {
        return makeExceptionError();
    }
}

Expected<> Mod::onUnload() noexcept {
    try {
        if (!mImpl->onUnload || mImpl->onUnload(*this)) {
            event::EventBus::getInstance().removeModEventEmitters(mImpl->manifest.name);
            return {};
        } else {
            return makeStringError("The mod cannot be unloaded"_tr());
        }
    } catch (...) {
        return makeExceptionError();
    }
}

Expected<> Mod::onEnable() noexcept {
    try {
        if (getState() == State::Enabled) {
            return {};
        }
        if (!mImpl->onEnable || mImpl->onEnable(*this)) {
            setState(State::Enabled);
            return {};
        } else {
            return makeStringError("The mod cannot be enabled"_tr());
        }
    } catch (...) {
        return makeExceptionError();
    }
}

Expected<> Mod::onDisable() noexcept {
    try {
        if (getState() == State::Disabled) {
            return {};
        }
        if (!mImpl->onDisable || mImpl->onDisable(*this)) {
            setState(State::Disabled);
            if (ll::getServerStatus() != ll::ServerStatus::Stopping) {
                event::EventBus::getInstance().removeModListeners(mImpl->manifest.name);
                command::CommandRegistrar::getInstance().disableModCommands(mImpl->manifest.name);
            }
            return {};
        } else {
            return makeStringError("The mod cannot be disabled"_tr());
        }
    } catch (...) {
        return makeExceptionError();
    }
}

void Mod::onLoad(CallbackFn func) noexcept { mImpl->onLoad = std::move(func); }

void Mod::onUnload(CallbackFn func) noexcept { mImpl->onUnload = std::move(func); }

void Mod::onEnable(CallbackFn func) noexcept { mImpl->onEnable = std::move(func); }

void Mod::onDisable(CallbackFn func) noexcept { mImpl->onDisable = std::move(func); }

void Mod::setState(State state) const { mImpl->state = state; }

Mod::State Mod::getState() const { return mImpl->state; }

Logger& Mod::getLogger() const { return mImpl->logger; }

} // namespace ll::mod
