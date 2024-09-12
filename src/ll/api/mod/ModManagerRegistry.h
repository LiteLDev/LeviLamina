#pragma once

#include "ll/api/Expected.h"
#include "ll/api/base/Macro.h"
#include "ll/api/data/DependencyGraph.h"
#include "ll/api/mod/ModManager.h"

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
    LLNDAPI static ModManagerRegistry& getInstance();

    LLNDAPI bool addManager(std::shared_ptr<ModManager> const& manager);

    LLNDAPI bool eraseManager(std::string_view type);

    LLNDAPI bool hasManager(std::string_view type) const;

    LLNDAPI std::shared_ptr<ModManager> getManager(std::string_view type) const;

    LLNDAPI std::shared_ptr<ModManager> getManagerForMod(std::string_view name) const;

    LLAPI void forEachManager(std::function<bool(std::string_view type, ModManager&)> const& fn) const;

    LLAPI void forEachModWithType(std::function<bool(std::string_view type, std::string_view name, Mod&)> const& fn
    ) const;

    LLNDAPI bool hasMod(std::string_view name) const;

    LLNDAPI std::string getModType(std::string_view name) const;

    LLNDAPI std::shared_ptr<Mod> getMod(std::string_view name) const;

    LLAPI void executeOnModLoad(std::function<void(std::string_view name)>&& fn) noexcept;

    LLAPI void executeOnModUnload(std::function<void(std::string_view name)>&& fn) noexcept;

    LLAPI void executeOnModEnable(std::function<void(std::string_view name)>&& fn) noexcept;

    LLAPI void executeOnModDisable(std::function<void(std::string_view name)>&& fn) noexcept;
};
} // namespace ll::mod
