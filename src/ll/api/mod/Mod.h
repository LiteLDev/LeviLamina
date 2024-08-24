#pragma once

#include <filesystem>
#include <functional>
#include <memory>

#include "ll/api/Expected.h"
#include "ll/api/Logger.h"
#include "ll/api/base/Macro.h"
#include "ll/api/mod/Manifest.h"

namespace ll::mod {

LLAPI std::filesystem::path const& getModsRoot();

class ModManager;
class Mod {

public:
    enum class State {
        Enabled,
        Disabled,
    };
    using callback_t = bool(Mod&);
    using CallbackFn = std::function<callback_t>;

    LLNDAPI explicit Mod(Manifest manifest);

    LLAPI ~Mod();

    LLNDAPI State getState() const;

    LLNDAPI Manifest const& getManifest() const;

    LLNDAPI std::string const& getName() const;

    LLNDAPI std::filesystem::path const& getModDir() const;

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
    friend ModManager;

    struct Impl;
    std::unique_ptr<Impl> mImpl;
};
} // namespace ll::mod
