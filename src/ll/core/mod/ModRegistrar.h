#pragma once

#include <memory>
#include <string>
#include <string_view>
#include <vector>

#include "ll/api/Expected.h"
#include "ll/api/mod/ModManagerRegistry.h"

namespace ll::mod {

class ModRegistrar {
    struct Impl;
    struct EnableAllMods;
    struct DisableAllMods;

    std::unique_ptr<Impl> impl;

    ModRegistrar();
    ~ModRegistrar();

public:
    static ModRegistrar& getInstance();

    [[nodiscard]] std::vector<std::string> getSortedModNames() const;

    void loadAllMods();

    Expected<> loadMod(std::string_view name) noexcept;

    Expected<> unloadMod(std::string_view name) noexcept;

    Expected<> enableMod(std::string_view name) noexcept;

    Expected<> disableMod(std::string_view name) noexcept;
};

} // namespace ll::mod
