#include "ll/api/mod/Mod.h"

#include "ll/api/i18n/I18n.h"
#include "ll/api/io/LoggerRegistry.h"
#include "ll/api/mod/ModManagerRegistry.h"
#include "ll/api/service/GamingStatus.h"

#include "pl/Config.h"

namespace ll::mod {
std::filesystem::path const& getModsRoot() {
    static std::filesystem::path path{(char8_t*)pl::pl_mods_path};
    return path;
}

struct Mod::Impl {
    Manifest manifest;

    State state;

    std::shared_ptr<io::Logger> logger;

    CallbackFn onLoad;
    CallbackFn onUnload;
    CallbackFn onEnable;
    CallbackFn onDisable;

    std::filesystem::path modDir;
    std::filesystem::path dataDir;
    std::filesystem::path configDir;
    std::filesystem::path langDir;

    ~Impl() { io::LoggerRegistry::getInstance().erase(manifest.name); }
};

Mod::Mod(Manifest manifest) : mImpl(std::make_unique<Impl>()) {
    mImpl->manifest  = std::move(manifest);
    mImpl->state     = State::Disabled;
    mImpl->logger    = io::LoggerRegistry::getInstance().getOrCreate(mImpl->manifest.name);
    mImpl->modDir    = getModsRoot() / string_utils::sv2u8sv(mImpl->manifest.name);
    mImpl->dataDir   = mImpl->modDir / u8"data";
    mImpl->configDir = mImpl->modDir / u8"config";
    mImpl->langDir   = mImpl->modDir / u8"lang";
}
Mod::~Mod() = default;

void Mod::release() noexcept { mImpl.reset(); }

Manifest const& Mod::getManifest() const { return mImpl->manifest; }

std::string const& Mod::getName() const { return getManifest().name; }

std::string const& Mod::getType() const { return getManifest().type; }

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
            if (auto res = ModManagerRegistry::getInstance().onModLoad(getName()); !res) {
                return res;
            }
            if (getGamingStatus() == GamingStatus::Running) {
                return onEnable();
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
    if (auto d = onDisable(); !d) {
        return d;
    }
    try {
        if (!mImpl->onUnload || mImpl->onUnload(*this)) {
            return ModManagerRegistry::getInstance().onModUnload(getName());
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
            if (auto res = ModManagerRegistry::getInstance().onModEnable(getName()); !res) {
                return res;
            }
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
            if (auto res = ModManagerRegistry::getInstance().onModDisable(getName()); !res) {
                return res;
            }
            setState(State::Disabled);
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

io::Logger& Mod::getLogger() const { return *mImpl->logger; }

} // namespace ll::mod
