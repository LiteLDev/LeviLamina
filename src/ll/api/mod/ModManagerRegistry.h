#pragma once

#include "ll/api/Expected.h"
#include "ll/api/base/Macro.h"
#include "ll/api/base/StdInt.h"
#include "ll/api/coro/Generator.h"
#include "ll/api/data/DependencyGraph.h"
#include "ll/api/mod/ModManager.h"
#include "ll/api/mod/NativeMod.h"

namespace ll::mod {
class ModRegistrar;
class ModManagerRegistry {
    friend ModRegistrar;
    friend Mod;
    struct Impl;
    std::unique_ptr<Impl> impl;

    ModManagerRegistry();
    ~ModManagerRegistry();

    Expected<> loadMod(Manifest manifest) noexcept;

    Expected<> unloadMod(std::string_view name) noexcept;

    Expected<> enableMod(std::string_view name) const noexcept;

    Expected<> disableMod(std::string_view name) const noexcept;

    Expected<> onModLoad(std::string_view name) const noexcept;

    Expected<> onModUnload(std::string_view name) const noexcept;

    Expected<> onModEnable(std::string_view name) const noexcept;

    Expected<> onModDisable(std::string_view name) const noexcept;

public:
    using CallbackId = uint64;

    enum class ModCallbackType {
        Load,
        Unload,
        Enable,
        Disable,
        All = -1,
    };

    LLNDAPI static ModManagerRegistry& getInstance();

    LLNDAPI bool addManager(std::shared_ptr<ModManager> const& manager);

    LLNDAPI bool eraseManager(std::string_view type);

    LLNDAPI bool hasManager(std::string_view type) const;

    LLNDAPI std::shared_ptr<ModManager> getManager(std::string_view type) const;

    LLNDAPI std::shared_ptr<ModManager> getManagerForMod(std::string_view name) const;

    LLNDAPI coro::Generator<ModManager&> managers() const;

    LLNDAPI coro::Generator<Mod&> mods() const;

    LLNDAPI bool hasMod(std::string_view name) const;

    LLNDAPI std::string getModType(std::string_view name) const;

    LLNDAPI std::shared_ptr<Mod> getMod(std::string_view name) const;

    LLAPI CallbackId executeOnMod(
        ModCallbackType                              type,
        std::function<void(std::string_view name)>&& fn,
        std::weak_ptr<Mod>                           mod = NativeMod::current()
    ) noexcept;

    CallbackId executeOnModLoad(
        std::function<void(std::string_view name)>&& fn,
        std::weak_ptr<Mod>                           mod = NativeMod::current()
    ) noexcept {
        return executeOnMod(ModCallbackType::Load, std::move(fn), std::move(mod));
    }

    CallbackId executeOnModUnload(
        std::function<void(std::string_view name)>&& fn,
        std::weak_ptr<Mod>                           mod = NativeMod::current()
    ) noexcept {
        return executeOnMod(ModCallbackType::Unload, std::move(fn), std::move(mod));
    }

    CallbackId executeOnModEnable(
        std::function<void(std::string_view name)>&& fn,
        std::weak_ptr<Mod>                           mod = NativeMod::current()
    ) noexcept {
        return executeOnMod(ModCallbackType::Enable, std::move(fn), std::move(mod));
    }

    CallbackId executeOnModDisable(
        std::function<void(std::string_view name)>&& fn,
        std::weak_ptr<Mod>                           mod = NativeMod::current()
    ) noexcept {
        return executeOnMod(ModCallbackType::Disable, std::move(fn), std::move(mod));
    }

    LLAPI bool   eraseOnModCallback(CallbackId id) noexcept;
    LLAPI size_t eraseOnModCallback(std::weak_ptr<Mod> mod, ModCallbackType type = ModCallbackType::All) noexcept;
};
} // namespace ll::mod
