#pragma once

#include <memory>
#include <string>
#include <string_view>
#include <vector>

#include "ll/api/Expected.h"
#include "ll/api/command/EnumName.h"
#include "ll/api/mod/ModManagerRegistry.h"

namespace ll::mod {

enum class ModNames;

constexpr inline std::string_view modsEnumName = command::enum_name_v<ModNames>;

class ModRegistrar {
    struct Impl;

    std::unique_ptr<Impl> impl;

    ModRegistrar();
    ~ModRegistrar();

public:
    static ModRegistrar& getInstance();

    [[nodiscard]] std::vector<std::string> getSortedModNames() const;

    void loadAllMods() noexcept;

    void enableAllMods() noexcept;

    void disableAllMods() noexcept;

    /// Loads a mod and, when requested, all mods that require it.
    ///
    /// Required dependencies are loaded before the target by the registry. When
    /// `loadDependents` is true, the required reverse-dependency closure is then
    /// loaded in dependency order as well.
    Expected<> loadMod(std::string_view name, bool loadDependents = false) noexcept;

    Expected<> reloadMod(std::string_view name, bool reloadDependents = false) noexcept;

    Expected<> unloadMod(std::string_view name, bool unloadDependents = false) noexcept;

    Expected<> enableMod(std::string_view name, bool enableDependencies = false) noexcept;

    Expected<> disableMod(std::string_view name, bool disableDependents = false) noexcept;
};

} // namespace ll::mod
